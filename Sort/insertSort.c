#include<stdio.h>
#include<stdlib.h>

/*
	直接插入排序：
	将一个数插入到一组排好序的序列s[0]-s[i-1]中，新的数列仍有序
	步骤：
	（1）将新插入的数从后往前与原有序数列中的数进行比较
	（2）找到第一个比它小的，记录这个比它小的数的数组下标j，跳出循环
	（3）如果j!=i-1,将比它小的数之后的数都往后移一位，将新插入的数放入s[j]
*/

void insert(int *s,int len)
{
	int i,j,k,t;
	for(i = 1;i < len;i++)
	{
		//易错点：大于等于0，一定要有等于0,否则就漏掉了和第一个数比较
		for(j = i-1;j >= 0;j--)
		{
			if(s[j] < s[i])
				break;
		}
		if(j != i-1)
		{
			t = s[i];
			for(k = i-1;k > j;k--)
			{
				s[k+1] = s[k];
			}
			//易错点：k+1而不是k,因为i要放在j后面而不是把j覆盖掉
			s[k+1] = t;
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

	insert(s,len);
	printf("排好序的数组序列为：\n");
	display(s,len);
	free(s);
	s = 0;
}


//改进版
void insert(int *a, int len)
{
	int i,j,k;
	for(i = 1;i < len;i++)
	{
		//向前逐个比较，直到找到插入的地方
		if(a[i] < a[i-1])
		{
			k = a[i];
			for(j = i-1;j >= 0 && a[j] >= k;j--)
			{
				a[j+1] = a[j];
			}
			a[j+1] = k;//插入
		}
		
	}
}