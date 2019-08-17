#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//第一个字符串大于第二个字符串，则返回大于0的数字 
//第一个字符串等于第二个字符串，则返回0 
//第一个字符串小于第二个字符串，则返回小于0的数字

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