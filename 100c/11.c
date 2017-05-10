#include<stdio.h>
#include<math.h>
  
/*
	题目描述：
	判断101到200之间的素数。
	程序分析：如何判断一个数为素数：用这个数去除2-sqtr(这个数)，有一个数能除尽说明这个数不是素数，没有一个数可以除尽则    为素数
*/


void main()
{
	int i,j,r,count = 0;
	printf("101到200之间的素数如下：\n");
	for(i = 101;i <= 200;i++)
	{
		r = sqrt(i);
		for(j = 2;j <= r;j++)
		{
			if(i%j == 0)
				break;
		}
		if(j > r) //jt跳出循环时值为r+1
		{
			count++;
			printf("%d ",i);
			if(count%5 == 0)
				printf("\n");
			



		}
	}
}