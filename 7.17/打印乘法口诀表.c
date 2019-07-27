#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。

void fun(int x)
{
	int i, j;
	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d = %-2d ", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int x = 0;
	printf("请输入你想打印乘法口诀表到n的数字\n");
	scanf("%d", &x);
	fun(x);

	system("pause");
	return 0;
}