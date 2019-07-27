#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//使用函数实现两个数的交换。

void fun(int x, int y)
{
	x = x + y;
	y = x - y;
	x = x - y;
	printf("%d %d", x, y);
}
int main()
{
	int i, j;
	printf("请输入你想交换的两个数字a b \n");
	scanf("%d", &i);
	scanf("%d", &j);
	fun(i, j);
	printf("\n");
	system("pause");
	return 0;
}