#include<stdio.h>

/*
	题目描述：
	输入三个整数x,y,z，请把这三个数由小到大输出。
	程序分析：比较、交换或者可以用几种经典排序
*/

int main()
{
	int x,y,z,t;
	printf("请依次输入这三个数：");
	scanf("%d %d %d",&x,&y,&z);
	if(x > y)
	{
		t = x;
		x = y;
		y = t;
	}

	if(x > z)
	{
		t = x;
		x = z;
		z = t;
	}

	if(y > z)
	{
		t = y;
		y = z;
		z = t;
	}
	printf("从小到大排好序的序列为：%d,%d,%d",x,y,z);
}