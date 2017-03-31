#include<stdio.h>

int strlen(char s[])
{
	//如果数组不存在
	if(s == NULL)
	{
		return -1;
		//判断数组内容，用*s
	}else if(*s == '\0')
	{
		return 0;
	}else {
		//通过每循环一次加一来判断长度
		return strlen(s+1)+1;
	}


}

int main()
{
	//c中没有字符串，用字符数组来表示
	char s[] = {"hello"};
	printf("%d",strlen(s));
	return 0;
}
