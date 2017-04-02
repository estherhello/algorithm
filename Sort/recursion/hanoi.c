#include<stdio.h>
/*
	总结一下已经写过的排序：
	1.冒泡排序：两两比较,大的向后沉，主要是：比较/交换
	2.选择排序：选出最小的与前面的交换，主要是：选择（要用到中间变量）/交换
	3.插入排序：把一个数插入到已经排好序的有序表中，主要是：比较/移动/交换
	要写快速排序，不会递归，所以先写递归的经典例子斐波拉契数列，求字符串长度和汉诺塔，写完理解了递归再写合并排序
	然后写快排
	参考教程：http://blog.csdn.net/cheyuxuan/article/details/10616167

	汉诺塔：
	有三根杆子A，B，C。A杆上有N个(N>1)穿孔圆盘，盘的尺寸由下到上依次变小。要求按下列规则将所有圆盘移至C杆：
	每次只能移动一个圆盘；
	大盘不能叠在小盘上面。
	提示：可将圆盘临时置于B杆，也可将从A杆移出的圆盘重新移回A杆，但都必须遵循上述两条规则。
	问：如何移？最少要移动多少次？
	参考：http://blog.csdn.net/mmc_maodun/article/category/1403138
	递归过程：
	先将n-1个盘子借助C移到B上
	将第n个盘子移到C上
	再将B上的n-1个盘子借助A移到C上
	移动次数：
	F(n) = 2F(n-1)+1(或者是2*n-1(n次方))

*/

int hanoicount(int n)
{
	if(n == 0)
		return 0;
	if(n == 1)
		return 1;
	if(n > 1)
		return 2*hanoicount(n-1)+1;
}

void hanoistep(int n,char a,char b,char c)
{
	if(n == 0)
		printf("不移动\n");
	if(n == 1)
		printf("从%c移到%c\n",a,c);
	if(n > 1)
	{
		hanoistep(n-1,a,c,b);
		printf("将%d个盘子借助%c从%c移动到%c\n",n-1,c,a,b);
		hanoistep(n-1,b,a,c);
		printf("将%d个盘子借助%c从%c移动到%c\n",n-1,b,a,c);
	}
}

int main()
{
	int n;
	char a,b,c;
	printf("请输入要移动的盘子数目：");
	scanf("%d",&n);
	printf("这%d个盘子由A盘借助B盘移动到C盘总共要移动%d次\n",n,hanoicount(n));
	printf("盘子移动的步骤为：\n");
	a = 'A';
	b = 'B';
	c = 'C';
	hanoistep(n,a,b,c);
}


