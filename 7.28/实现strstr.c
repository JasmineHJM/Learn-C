#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

char* my_strstr(char*str1, char*str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	char* s1 = str1;
	char* s2 = str2;
	char* start = str1;
	while (*start)
	{
		s1 = start;

		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return start;
		}
		start++;
		s2 = str2;
	}
	return NULL;
}

int main()
{
	char str1[] = "abcdefgh";
	char str2[] = "gh";
	printf("%s\n", my_strstr(str1,str2));

	system("pause");
	return 0;
}

