#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//1.给定两个整型变量的值，将两个值的内容进行交换。

//int main()
//{
//	int i = 2, j = 5, k;
//	printf("i = %d , j = %d\n", i, j);
//	k = j;
//	j = i;
//	i = k;
//	printf("i = %d , j = %d\n", i, j);
//
//	system("pause");
//	return 0;
//}

//2.不允许创建临时变量，交换两个数的内容。

//int main()
//{
//	int i = 2, j = 5;
//	printf("i = %d , j = %d\n", i, j);
//	i = i + j;
//	j = i - j;
//	i = i - j;
//	printf("i = %d , j = %d\n", i, j);
//	
//	system("pause");
//	return 0;
//}

//更优的方法,异或

//int main()
//{
//	int i = 2, j = 5;
//	printf("i = %d , j = %d\m", i, j);
//	i = i ^ j;
//	j = i ^ j;
//	i = i ^ j;
//	printf("i = %d , j = %d\n", i, j);
//
//	system("pause");
//	return 0;
//}
