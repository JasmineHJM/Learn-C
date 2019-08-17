#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//char *strchr(const char *str, int c)
//在参数str所指向的字符串中搜索第一次出现字符c（一个无符号字符）的位置。
//该函数返回在字符串 str 中第一次出现字符 c 的位置，如果未找到该字符则返回 NULL。

char *my_strchr(char *str, char c)
{
	assert(str != NULL);
	while (*str)
	{
		if (*str == c)
		{
			return str;
		}
		str++;
	}
	return NULL;
}
int main()
{
	char str[] = "abcdefghujiamin";
	char c = 'h';
	char* ret = my_strchr(str, c);
	if (ret == NULL)
	{
		printf("不存在\n");
	}
	else
	{
		printf("%s\n", ret);
	}

	system("pause");
	return 0;
}
