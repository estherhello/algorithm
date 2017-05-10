#include<stdio.h>

/*
	题目描述：
	输入两个数a、b，求他们的最大公约数与最小公倍数
	程序分析：最大公约数用辗转相除法，假设a>b，a%b=r，然后a=b,b=r……直至r=0
	例如：求（319，377）：
		∵377÷319=1（余58）
		∴（377，319）=（319，58）；
		∵319÷58=5（余29），
		∴（319，58）=（58，29）；
		∵58÷29=2（余0），
		∴（58，29）=29；
		∴（319，377）=29.
	最小公倍数等于两数乘积除以最大公约数
*/

int main()
{
	int a,b,n,r,t;
	printf("请输入待求其最大公约数与最小公倍数的两数：");
	scanf("%d %d",&a,&b);
	if(a < b)
	{t = a; a = b; b = t;}
	n = a*b;
	r = a%b;
	while(r != 0)
	{
		a = b;
		b = r;
		r = a%b;
	}
	n = n/b;
	printf("这两个数的最大公约数和最小公倍数分别为：%d,%d",b,n);
}