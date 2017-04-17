#include<stdio.h>

/*
	题目描述：
	输出9*9口诀。
	程序分析：for循环实现
*/

int main()
{
	int i,j,result;
	for(i = 1;i < 10;i++)
	{
		for(j = 1;j < 10;j++)
		{
			result = i*j;
			printf("%d*%d=%-3d",i,j,result);
		}
		printf("\n");//每一行后换行
	}
	return 0;
}