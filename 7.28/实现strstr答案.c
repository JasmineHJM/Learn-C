#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

char* my_strstr(const char* str1, const char* str2)
{
	const char* s1 = str1;
	const char* s2 = str2;
	const char* start = str1;
	assert(str1 != NULL);
	assert(str2 != NULL);
	//²éÕÒ
	if(*str2 == '\0')
		return (char*)str1;

	while(*start)
	{
		s2 = str2;
		s1 = start;
		while(*s1 && *s2 && *s1==*s2)
		{
			s1++;
			s2++;
		}
		if(*s2 == '\0')
		{
			return (char*)start;
		}
		start++;
	}
	return NULL;
}

int main()
{
	char arr1[] = "abbbcdef";
	char arr2[] = "bbc";
	char* ret = my_strstr(arr1, arr2);
	if(ret == NULL)
	{
		printf("²»´æÔÚ\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}
