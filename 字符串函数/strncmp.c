#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int my_trncmp(const char* str1, const char* str2, size_t n) 
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (n && *str1 == *str2)
	{
		if (*str1 == '\0' || *str2 == '\0') 
			break;
		++str1;
		++str2;
		--n;
	}
	if (n == 0) 
		return 0;
	return *str1 - *str2;
}

int main() 
{
	char string1[] = "abcd";
	char string2[] = "abcefgh";
	int flag = my_strncmp(string1, string2, 4);
	if (flag < 0)
		printf("stirng1 < string2\n");
	else if (flag > 0) 
		printf("string1 > string2\n");
	else 
		printf("string1 = string2\n");
	printf("%d\n", flag);

	system("pause");
	return 0;
}
