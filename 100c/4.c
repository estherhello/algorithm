#include<stdio.h>

/*
	题目描述：
	输入某年某月某日，判断这一天是这一年的第几天？
	程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊情况，闰年且输	入月份大于3时需考虑多加一天。
*/

int main()
{
	int year,month,day,sum,leap;
	printf("请输入年月日，以“，”隔开：");
	scanf("%d，%d，%d",&year,&month,&day);
	switch(month)
	{
		case 1:sum = 0;break;
		case 2:sum = 31;break;
        case 3:sum = 59;break;
        case 4:sum = 90;break;
        case 5:sum = 120;break;
        case 6:sum = 151;break;
        case 7:sum = 181;break;
        case 8:sum = 212;break;
        case 9:sum = 243;break;
        case 10:sum = 273;break;
        case 11:sum = 304;break;
        case 12:sum = 334;break;
        default:printf("data error");break;
	}
	if(day <= 31){
	//加上天数
	sum = sum+day;
	//判断是不是闰年
	if(year%4 == 0 && year%100 != 0 || year%400 == 0)
	{
		leap = 1;
	}else {
		leap = 0;
	}
	//是闰年且在2月份以后，加上1天
	if(leap = 1 && month > 3)
		sum++;

	printf("这一天是%d年的第%d天",year,sum);
	}else
		printf("day error");
}#include<stdio.h>

/*
	题目描述：
	输入某年某月某日，判断这一天是这一年的第几天？
	程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊情况，闰年且输	入月份大于3时需考虑多加一天。
*/

int main()
{
	int year,month,day,sum,leap;
	printf("请输入年月日，以“，”隔开：");
	scanf("%d，%d，%d",&year,&month,&day);
	switch(month)
	{
		case 1:sum = 0;break;
		case 2:sum = 31;break;
	             case 3:sum = 59;break;
	             case 4:sum = 90;break;
	             case 5:sum = 120;break;
	             case 6:sum = 151;break;
	             case 7:sum = 181;break;
	             case 8:sum = 212;break;
	             case 9:sum = 243;break;
	             case 10:sum = 273;break;
	             case 11:sum = 304;break;
	             case 12:sum = 334;break;
	             default:printf("data error");break;
	}
	if(day <= 31){
	//加上天数
	sum = sum+day;
	//判断是不是闰年
	if(year%4 == 0 && year%100 != 0 || year%400 == 0)
	{
		leap = 1;
	}else {
		leap = 0;
	}
	//是闰年且在2月份以后，加上1天
	if(leap = 1 && month > 3)
		sum++;

	printf("这一天是%d年的第%d天",year,sum);
	}else
		printf("day error");
}