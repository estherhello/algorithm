#include<stdio.h>
#include<stdlib.h>

/*
	归并排序：
	将两个或两个以上有序表合并成一个有序表的过程
	常用的方法为2路归并排序：
		将含有n个数的待排序序列看成n个独立的有序表，相邻的两两合并成n/2个有序表，将这n/2个有序表相邻的再两		两合并……直至最后只剩2个相邻的有序表，合并他们即整个序列都有序。
*/

void Merge(int *s,int *b,int start,int mid,int end)
{
	int i = start;
	int j = mid+1;
	int k = 0;

	//比较左边与右边，将较小的放入临时数组b中，易错点：等于，不要漏数据!!!!
	while(i <= mid && j <= end)
	{
		if(s[i] <= s[j])
		{
			b[k++] = s[i++];
		}else {
			b[k++] = s[j++];
		}
	}

	//将左边或者右边剩下的部分放入b，以下两个只会执行一个
	while(i <= mid)
	{
		b[k++] = s[i++];
	}

	while(j <= end)
	{
		b[k++] = s[j++];
	}

	//将b拷到s
	for(i = 0;i < k;i++)
	{
		s[i+start] = b[i];
	}
}

void MSort(int *s,int *b,int start,int end)
{
	if(start < end)
	{
		int mid = (start+end)/2;
		MSort(s,b,start,mid);//对左边归并排序
		MSort(s,b,mid+1,end);//对右边归并排序
		Merge(s,b,start,mid,end);//合并左右
	}
}

//整合
void Merge_Sort(int *s,int len)
{
	int *b;
	b = (int *)malloc(len*sizeof(int));
	MSort(s,b,0,len-1);
	free(b);
	b = 0;

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
	Merge_Sort(s,len);
	printf("排好序的数组如下：\n");
	for(i = 0;i < len;i++)
	{
		printf("%d\t",s[i]);
	}
	free(s);
	s = 0;
}