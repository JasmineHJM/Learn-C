#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//实现一个函数判断year是不是闰年。

void fun(int year)
{
	int i;
	i = year;
	if (i % 4 == 0 && i % 100 != 0)
	{
		printf("这一年是闰年\n");

	}
	else if (i % 400 == 0)
	{
		printf("这一年是闰年\n");
	}
	else
	{
		printf("这一年不是闰年\n");
	}
}
int main()
{
	int year = 0;
	printf("请输入你想查找的年份\n");
	scanf("%d", &year);
	fun(year);
	system("pause");
	return 0;
}