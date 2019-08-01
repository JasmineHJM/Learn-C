#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
int main()
{
	int arr[15][15];
	int i, j;
	for (i = 0; i < 15; i++)
	{
		arr[i][0] = 1;
		arr[i][i] = 1;
		for (j = 1; j < i; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (i = 0; i < 15; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%-4d ", arr[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}