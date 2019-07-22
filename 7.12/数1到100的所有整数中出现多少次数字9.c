#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<stdlib.h>
//编写程序数一下 1到 100 的所有整数中出现多少次数字9

int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
		{
			++count;
		}
	}
	printf("共出现了:%d次", count);
	printf("\n");

	system("pause");
	return 0;
}