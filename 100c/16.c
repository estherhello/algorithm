#include<stdio.h>

/*
	题目描述：
	求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。
	程序分析：关键是计算出每一项的值。
*/

int main()
{
	int a,n,t,s = 0;
	printf("请输入a和n：");
	scanf("%d %d",&a,&n);
	t = a;
	while(n > 0)
	{
		s += t;
		a = a*10;
		t += a;
		n--;
	}
	printf("a+aa+aaa+a……a=%d",s);
}