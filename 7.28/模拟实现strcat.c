#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include <assert.h>

char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	//1. ��Ŀ��ռ��'\0'
	while(*dest)
	{
		dest++;
	}
	//2. ׷��
	while(*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "hello ";
	my_strcat(arr1, arr1);
	printf("%s\n", arr1);
	return 0;
}
