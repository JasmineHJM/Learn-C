#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :1999 2299  输出例子 : 7

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	printf("请输入想比较的两个整数,例如:a b\n");
//	scanf("%d %d", &a, &b);
//	int c = a^b;
//	for (int i = 0; i <= 31; i++)
//	{
//		if (((c >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//
//	system("pause");
//	return 0;
//}
