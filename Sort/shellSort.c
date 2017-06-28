#include<stdio.h>

void shell(int *s, int len)
{
	int i,j,k,t,gap;
	for(gap = len/2; gap > 0; gap /= 2)
	{
		for(i = 0; i < gap; i++)
		{
			for(j = i+gap; j < len; j += gap)
			{
				if(s[j] < s[j-gap])
				{
					t = s[j];
					k = j-gap;
					while(k >= 0 && s[k] > t)
					{
						s[k+gap] = s[k];
						k -= gap;
					}
					s[k+gap] = t;
				}
			}
		}
	}
}

//改进版
void shell(int *s, int len)
{
	int j,k,t,gap;
	for(gap = len/2; gap > 0; gap /= 2)
	{
		for(j = gap; j < len; j++)
		{
			if(s[j] < s[j-gap])
			{
				t = s[j];
				k = j-gap;
				while(k >= 0 && s[k] > t)
				{
					s[k+gap] = s[k];
					k -= gap;
				}
				s[k+gap] = t;
			}
		}
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
	int s[4] = {4, 3, 2, 1};
	display(s,4);
	shell(s,4);
	display(s,4);
}