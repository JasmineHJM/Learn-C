#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。

//int main()
//{
//	int num = 0;
//	int i = 0;
//	printf("请输入想输出的整数:");
//	scanf("%d", &num);
//	printf("二进制首位为第一位\n");
//	printf("奇数位二进制序列为:");
//	for (i = 0; i <= 30; i += 2)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			printf("1");
//		}
//		else
//			printf("0");
//	}
//	printf("\n");
//	printf("偶数位二进制序列为:");
//	for (i = 0; i <= 31; i+=2)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			printf("1");
//		}
//		else
//			printf("0");
//	}
//	printf("\n");
//
//	system("pause");
//	return 0;
//}
