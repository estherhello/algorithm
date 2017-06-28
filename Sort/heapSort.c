#include<stdio.h>
/*
*堆首先是一颗完全二叉树，特点：
	（1）父节点比左右子节点都大（或小）
	（2）每一个子节点的子树也满足（1）

	堆排序两步（做两件事）：
	（1）将一组无序的数建成堆
	（2）去掉堆顶元素后，调整为新堆
	（3）重复（2）
*/

void adjust(int *s, int i, int n)
{
	int j,t;
	t = s[i];	//保存当前元素
	j = 2*i+1;	//左孩子

	while(j < n)
	{
		//比较左右孩子，右孩子大则加一
		if(j+1 < n && s[j+1] > s[j])
		{
			j++;
		}

		//如果满足最大堆，不用调整
		if(s[j] < t)
		{
			break;
		}

		//调整
		s[i] = s[j];
		i = j;
		j = 2*i+1;
	}
}

void heap(int *s, int n)
{
	int i,t;

	/*
	*建堆
	*/
	//从第一个非叶子节点开始调整
	for(i = (n-1)/2; i >= 0; i--)
	{
		adjust(s,i,n);
	}

	/*
	*堆排序
	*/
	//堆顶元素与最后元素交换，然后调整堆
	for(i = n-1; i > 0; i--)
	{
		//交换
		t = s[0];
		s[0] = s[i];
		s[i] = t;

		//调整堆
		adjust(s,0,i);

	}
}


void display(int *s, int len)
{
	int i;
	for(i = 0;i < len;i++)
	{
		printf("%d\t", s[i]);
	}
	printf("\n");
}

void main()
{
	int s[6] = {4, 3, 2, 1,6,5};
	display(s,6);
	heap(s,6);
	display(s,6);
}