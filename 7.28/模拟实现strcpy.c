#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
#include <assert.h>

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = "xxxxxxxx";
	char* p = "hello";
	my_strcpy(arr1, p);
	printf("%s\n", arr1);
	return 0;
}

