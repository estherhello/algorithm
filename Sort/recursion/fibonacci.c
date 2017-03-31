#include<stdio.h>
/*
	总结一下已经写过的排序：
	1.冒泡排序：两两比较大的向后沉，主要是：比较/交换
	2.选择排序：选出最小的与前面的交换，主要是：选择（要用到中间变量）/交换
	3.插入排序：把一个数插入到已经排好序的有序表中，主要是：比较/移动/交换
	要写快速排序，不会递归，所以先写递归的经典例子斐波拉契数列，求字符串长度和汉诺塔，写完理解了递归再写合并排序
	然后写快排
	递归：将复杂问题分解为与它相似的子问题，通过求解子问题从而求解原问题
	参考教程：http://blog.csdn.net/cheyuxuan/article/details/10616167

	斐波拉契数列：1 1 2 3 5 8 13……
*/

int fibonacci(int n)
{
	if(n < 0)
	{
		printf("输入的数必须大于0，请重新输入：");
		scanf("%d",&n);
	}
	if(n == 0)
		return 0;
	if(n == 1)
		return 1;
	if(n > 1)
		return fibonacci(n-1)+fibonacci(n-2);
}

void main()
{
	int i,j;
	printf("请输入要显示的非波拉契数列个数：");
	scanf("%d",&i);
	printf("这%d个非波拉契数列为：\n",i);
	//易错点：j不是从0到i-1，否则的话就是从0开始输出了，0，1，1，2，3……
	for(j = 1;j <= i;j++)
	{
		printf("%d\t",fibonacci(j));
	}
}