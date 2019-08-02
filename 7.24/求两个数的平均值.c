#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//不使用（a + b） / 2这种方式，求两个数的平均值。

int main()
{
	int a = 0;
	int b = 0;
	int ave = 0;
	printf("请输入你想要求平均值的两个数：");
	scanf("%d %d", &a, &b);
	a > b ? a : b;
	ave = b + (a - b) / 2;
	printf("%d + %d的平均值为：%d\n", a, b, ave);

	system("pause");
	return 0;
}

