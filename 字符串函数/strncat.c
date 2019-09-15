#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

char* my_strncat(char* dest, const char* src, size_t n)
{
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest != '\0')
		++dest;
	while (n) 
	{
		if (*src == '\0')
			break;
		*dest++ = *src++;
		--n;
	}
	*dest = '\0';
	return dest;
}

int main()
{
	char string1[256] = "abcdefg";
	char string2[] = "higklmn";
	my_strncat(string1, string2, 5);
	printf("%s\n", string1);

	system("pause");
	return 0;
}