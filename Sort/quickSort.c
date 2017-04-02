#include<stdio.h>
#include<stdlib.h>

/*
	快速排序：
	1.找一个数作为基准，一般选第一个
	2.从后往前找比基准小的，跟前面的交换
	3.从前往后找比基准大的，跟后面的交换
*/
/*
	找到每次快排后分隔点的位置，方便对两边再进行快排
	把第一个数当基准，从后往前找比它小的，赋值到它原来的位子（注意：不是跟它交换，因为一次
	快排后，它左边的都比它小，右边的都比它大，所以它被存到临时变量中，作为基准，最后low=high的时候，放到
	low的位置）
	从前往后找比它大的，赋值到high
*/
int findPas(int *s,int low,int high)
{
	//第一个数作为基准
	int key = s[low];
	while(low < high)
	{
		//从后往前找比它大的
		while(low < high && s[high] >= key)
			high--;
		//找到交换
		s[low] = s[high];

		//从前往后找比它小的
		while(low < high && s[low] <= key)
			low++;
		//找到交换
		s[high] = s[low];

		//low=high了，把基准的值赋给low/high
		s[low] = key;

		//返回分割点的位置
		return low;
	}
}

void Quick_Sort(int *s,int low,int high)
{
	int pas;
	if(low < high)
	{
		pas = findPas(s,low,high);
		Quick_Sort(s,low,pas-1);//对左边进行快排
		Quick_Sort(s,pas+1,high);//对右边进行快排
	}
}

int main()
{
	int i,len;
	int *s;
	printf("请输入待排序数组个数：");
	scanf("%d",&len);

	s = (int *)malloc(len*sizeof(int));
	printf("请依次输入这%d个待排序数组：",len);
	for(i = 0;i < len;i++)
	{
		scanf("%d",s+i);
	}
	Quick_Sort(s,0,len-1);
	printf("排好序的数组如下：\n");
	for(i = 0;i < len;i++)
	{
		printf("%d\t",s[i]);
	}
	free(s);
	s = 0;
}