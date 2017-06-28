#include<stdio.h>
#include<stdlib.h>

/*
	选择排序：
	每次从一组待排序的数组中选择第i小的数与数组的第i个位置交换
	步骤：
	（1）通过比较找出数组中最小的数，记录它的数组下标，需要一个临时变量min来存放最小的数值
	（2）将最小的数与数组第一个位置交换
	（3）在剩下的数组中重复上述过程，直至整体数列有序
*/

void select(int *s,int len)
{
	int i,j,t,min;
	for(i = 0;i < len;i++)
	{
		min = i;
		for(j = len-1;j > i;j--)
		{
			if(s[j] < s[min])
				min = j;
		}
		t = s[i];
		s[i] = s[min];
		s[min] = t;
	}
}

void display(int *s, int len)
{
	int i;
	for(i = 0;i < len;i++)
	{
		printf("%d\t",s[i]);
	}
}

void main()
{
	int i,len;
	int *s;

	printf("请输入待排序数组个数:");
	scanf("%d",&len);

	s = (int *)malloc(len*sizeof(int));

	printf("请依次输入这%d个待排序数组，以空格间隔：",len);
	for(i = 0;i < len;i++)
	{
		scanf("%d",s+i);
	}

	select(s,len);
	printf("排好序的数组序列为：\n");
	display(s,len);
	free(s);
	s = 0;
}