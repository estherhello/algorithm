#include<stdio.h>
#include<math.h>
  
/*
	题目描述：
	利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。
	程序分析：(a>b)?a:b这是条件运算符的基本例子。
*/


void main()
{
	int score;
	char grade;
	printf("请输入分数：");
	scanf("%d",&score);
	grade = (score > 90) ? 'A':((score > 60) ? 'B':'C');
	printf("成绩等级为:%c",grade);
}