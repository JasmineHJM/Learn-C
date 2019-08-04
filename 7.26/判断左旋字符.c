#define _CRT_SECURE_NO_WARNINGS 1

//判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

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
//void swap(char* x, char* y)
//{
//	char tmp = '0';
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int left_rot(char arr1[], char arr2[])
//{
//	int i = 0;
//	int j = 0;
//	int len = my_strlen(arr1);
//	int ret = 0;
//	for (i = 0; i < len; i++)
//	{
//		for (j = 0; j < len - 1; j++)
//		{
//			swap(&arr1[j], &arr1[j + 1]);
//		}
//		if (ret == strcmp(arr1, arr2))
//		{
//			ret = 1;
//			break;
//		}
//	}
//		return ret;
//}
//
//int main()
//{
//	char arr1[] = "aabcd";
//	char arr2[] = "bcdaa";
//	int i = left_rot(arr1, arr2);
//	printf("%d", i);
//
//	system("pause");
//	return 0;
//}





















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
//void swap(char* x, char *y)
//{
//	char tmp = '0';
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int left_rot(char* arr1, char* arr2)
//{
//	int i = 0;
//	int j = 0;
//	int len = my_strlen(arr1);
//	int ret = 0;
//	for (i = 0; i < len; i++)
//	{
//		for (j = 0; j < len - 1; j++)
//		{
//			swap(&arr1[j], &arr1[j + 1]);
//		}
//		if(ret == strcmp(arr1, arr2))
//		{
//			ret = 1;
//			break;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "cdddd";
//	int i = left_rot(arr1, arr2);
//	printf("%d\n", i);
//
//	system("pause");
//	return 0;
//}
