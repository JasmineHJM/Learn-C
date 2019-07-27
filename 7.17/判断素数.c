#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//实现一个函数，判断一个数是不是素数。

void fun(int num)
{
	int i = 0;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("这个数不是素数\n");
			break;
		}
	}
	if (i >= num)
	{
		printf("这个数是素数\n");
	}
}
int main()
{
	int num = 0;
	printf("请输入你想查的数字：\n");
	scanf("%d", &num);
	if (num == 1 || num == 0)
	{
		printf("这个数不是素数\n");
	}
	fun(num);
	system("pause");
	return 0;
}
