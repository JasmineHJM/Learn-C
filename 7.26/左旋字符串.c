#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

//int my_strlen(const char* arr)
//{
//	int count = 0;
//	assert(arr != NULL);
//	while (*arr++)
//	{
//		count++;
//	}
//	return count;
//}
//
//void swap(char* a, char* b)
//{
//	char tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void left_rot(char* arr)
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int len = my_strlen(arr);
//	printf("请输入您想左旋几个字符?\n");
//	scanf("%d", &k);
//	for (i = 0; i < k; i++)
//	{
//		//ABCDE
//		for (j = 0; j < len - 1; j++)
//		{
//			swap(&arr[j], &arr[j + 1]);
//		}
//	}
//	printf("左旋后的字符串为:");
//	printf("%s\n", arr);
//}
//
//int main()
//{
//	char arr[] = "ABCDE";
//	printf("要左旋的字符串为：%s\n", arr);
//	left_rot(arr);
//
//	system("pause");
//	return 0;
//}

