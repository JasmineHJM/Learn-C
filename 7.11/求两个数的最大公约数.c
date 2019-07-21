#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//求两个数的最大公约数。

//int main()
//{
//	int a, b;
//	printf("请输入两个数\n");
//	scanf("%d %d", &a, &b);
//	int n = a;
//	if (n > b)
//	{
//		n = b;
//	}
//	for (int i = n; i >= 1; i--)
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			printf("最大公约数: %d \n", i);
//			break;
//		}
//
//	}
//
//	system("pause");
//	return 0;
//}

//更优的方法

//int main()
//{
//	int a, b;
//	printf("请输入两个数\n");
//	scanf("%d %d", &a, &b);
//	int tmp = 0;
//	while (tmp = a % b)
//	{
//		a = b;
//		b = tmp;
//	}
//	printf("最大公约数: %d\n", b);
//
//	system("pause");
//	return 0;
//}
