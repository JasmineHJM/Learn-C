#define _CRT_SECURE_NO_WARNINGS 1

//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
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
