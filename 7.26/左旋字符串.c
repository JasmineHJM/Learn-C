#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

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
//	printf("�������������������ַ�?\n");
//	scanf("%d", &k);
//	for (i = 0; i < k; i++)
//	{
//		//ABCDE
//		for (j = 0; j < len - 1; j++)
//		{
//			swap(&arr[j], &arr[j + 1]);
//		}
//	}
//	printf("��������ַ���Ϊ:");
//	printf("%s\n", arr);
//}
//
//int main()
//{
//	char arr[] = "ABCDE";
//	printf("Ҫ�������ַ���Ϊ��%s\n", arr);
//	left_rot(arr);
//
//	system("pause");
//	return 0;
//}

