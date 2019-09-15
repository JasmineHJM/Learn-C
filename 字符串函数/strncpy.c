#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

char* my_trncpy(char* dest, const char* src, size_t n) 
{
	assert(dest != NULL);
	assert(src != NULL);
	while (n) 
	{
		if (*src == NULL)
			break;
		*dest++ = *src++;
		--n;
	}
	return dest;
}

int main()
{
	char string1[256] = { 0 };
	char string2[] = "abcdefgh";
	my_trncpy(string1, string2, 7);
	printf("%s\n", string1);

	system("pause");
	return 0;
}
