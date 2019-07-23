#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//用*打印一个菱形
int main()
{
	int i, j, k;
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7 - (i + 1); j++)
		{
			printf(" ");
		}
		for (k = 0; k < 2 * (i + 1) - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < 7 - 1; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf(" ");
		}
		for (k = 0; k < (2 * 7) - 2 * (i + 1) - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
