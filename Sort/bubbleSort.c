#include<stdio.h>
#include<stdlib.h>

/*

ð������

1.һ��n�����ݣ���һ������ڶ������Ƚϣ�����ȵڶ����󣬽������ڶ�����������Ƚϣ��������򽻻����ظ�������̣�ֱ�����ĳ������

2.��ʣ�µ������ظ��������̣������ҳ��ڶ���������������������ֱ����������

*/

//ð��
void bubble(int *s, int len)
{
	int i,j,t;

	//�����ĳ������
	for(i = len-1;i > 0;i--)
	{   
		//��s[0]-s[i-1]�ظ�����ð������
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
	//�����������������ʹ���������
	int i,len;
	int *s;
	printf("��������������������");
	scanf("%d",&len);

	s = (int *)malloc(len*sizeof(int));
	printf("��������%d�����������飬�Կո�����",len);
	for(i = 0;i < len;i++)
	{
		scanf("%d",s+i);
	}

	bubble(s,len);
	printf("�ź������������Ϊ��\n");
	display(s,len);
	free(s);
	s = 0;
}