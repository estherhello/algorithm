#include<stdio.h>
#include<stdlib.h>
  
/*
	题目描述：
	古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如     兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）
	程序分析：
*/


void main()
{
	int month,y,i;
	printf("您想看前多少个月的数目：");
	scanf("%d",&month);
	for(i = month;month > 0;month--)
	{
		if(month == 1 || month == 2)
		{
			y = 2;
		}else {
			y = 4*month/3;
		}
		printf("第%d个月有%d只兔子\n",month,y);
	}
}