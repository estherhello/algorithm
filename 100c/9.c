#include<stdio.h>
#include<stdlib.h>
  
/*
	题目描述：
	要求打印杨辉三角。
	程序分析：杨辉三角，也叫贾宪三角。这于我们现在的学习联系最紧密的是2项式乘方展开式的系数规律。如图，在贾宪三角中，第3    行的第三个数恰好对应着两数和的平方公式依次下去。 
    杨辉三角是一个由数字排列成的三角形数表，一般形式如下：
	                       1
						  1 1
						 1 2 1
						1 3 3 1
					   1 4 6 4 1
    .................................................
    杨辉三角的规律是：它的两条斜边都是由数字1组成的，而其余的数则是等于它肩上的两个数之和
*/


void main()
{
	int i,j,k,n;
	int a[50][50] = {0};
	printf("请输入要打印的杨辉三角的行数：");
	scanf("%d",&n);
	
	//先填第一列和对角线，全为1，同时第1、2行已打印完
	for(i = 0;i < n;i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	//填中间的每个数，等于其肩上的两个数之和
	for(i = 2;i < n;i++)
	{
		for(j = 1;j < n;j++)
		{
			a[i][j] = a[i-1][j]+a[i-1][j-1];
		}
	}

	//打印数组的数
	for(i = 0;i < n;i++)
	{
		//设置空格
		for(k = 0;k < n-i;k++)
		{
			printf(" ");
		}
		//保证只打对角线内的，0不会打出来
		for(j = 0;j <= i;j++)
		{
			printf("%d ",a[i][j]);
		}
		//换行
		printf("\n");
	}
}