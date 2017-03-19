#include<stdio.h>
#include<stdlib.h>

/*

冒泡排序：

1.一组n个数据，第一个数与第二个数比较，如果比第二个大，交换，第二个与第三个比较，比它大则交换，重复这个过程，直到最大的沉到最后。

2.在剩下的数中重复上述过程，依次找出第二大的数，第三大的数……直到数组有序

*/

//冒泡
void bubble(int *s, int len)
{
	int i,j,t;

	//将最大的沉到最后
	for(i = len-1;i > 0;i--)
	{   
		//对s[0]-s[i-1]重复进行冒泡排序
		for(j = 0;j < i;j++)
		{
			if(s[j] > s[j+1])
			{
				t = s[j];
				s[j] = s[j+1];
				s[j+1] = t;
			}
		}
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
	//输入待排序数组个数和待排序数组
	int i,len;
	int *s;
	printf("请输入待排序数组个数：");
	scanf("%d",&len);

	s = (int *)malloc(len*sizeof(int));
	printf("请输入这%d个待排序数组，以空格间隔：",len);
	for(i = 0;i < len;i++)
	{
		scanf("%d",s+i);
	}

	bubble(s,len);
	printf("排好序的数组序列为：\n");
	display(s,len);
	free(s);
	s = 0;
}