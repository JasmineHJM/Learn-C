#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//��һ���ַ������ڵڶ����ַ������򷵻ش���0������ 
//��һ���ַ������ڵڶ����ַ������򷵻�0 
//��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//
//	while(*str1 == *str2)
//	{
//		if(*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//
//	return *str1-*str2;
//}
//
//int main()
//{
//	char* str1 = "abc";
//	char *str2 = "abcdef";
//
//	int ret = my_strcmp(str1, str2);
//	printf("%d\n", ret);
//	return 0;
//}