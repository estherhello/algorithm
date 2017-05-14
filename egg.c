#include<stdio.h>
#define N 101
/*
	题目描述：
	100层高的楼，有两只承受力一样的鸡蛋，测试鸡蛋摔下不碎的最高楼层，问两只鸡蛋如何用最少的次数测试出鸡蛋摔下不碎的最高楼层
	题目分析：本题是一道动态规划题（根据前面已知的数求出后面的数）
	定义f(n)为测试出两只鸡蛋摔下不碎用的最少次数（n为楼层高度）。
	假设从i层摔下，有两种结果：
	（1）碎了，那么剩下的一个鸡蛋测试1到i-1层，最多测试次数为i-1,则f(n)=1+i-1
	（2）没碎，那么继续用两只鸡蛋测试i+1层到n层，相当于原问题的子问题，最多测试次数为f(n-i),则f(n)=1+f(n-i)
	综上，则：f(n)=min{1+max[i-1,f(n-i)]}（i属于[1,n]）
	需要定义一个数组存放每一层的值，一边求出f(100)的值
*/

int max(int a,int b)
{
	int t;
	t = a > b ? a : b;
	return t;
}

int fNum(int n)
{
	int f[N] = {0};
	int t = N;
	int	k = 2;
	int i;
	f[0] = 0;
	f[1] = 1;

	while(k <= n)
	{
		for(i = 1;i <= k;i++)
		{
			if(t > (1+max(i-1,f[k-i])))
				t = 1+max(i-1,f[k-i]);
		}
		f[k] = t;
		t = N;
		k++;
	}
	return f[n];
}

void main()
{
	printf("%d",fNum(100));
}