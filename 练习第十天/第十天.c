#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main101()
{
	char *str[3] = { "stra", "strb", "strc" };
	char *p = str[0];
	int i = 0;
	while (i<3)
	{
		printf("%s", p++);
		i++;
	}

	system("pause");
	return 0;
}

char *myString()
{
	char buffer[6] = { 0 };
	char *s = "Hello World!";
	for (int i = 0; i < sizeof(buffer)-1; i++)
	{
		buffer[i] = *(s + i);
	}

	return buffer;
}
int main102()
{
	printf("s\n", myString());

	system("pause");
	return 0;
}

int main103()
{
	int i = 1;
	printf("%d, %d\n", sizeof(i++), i);

	system("pause");
	return 0;
}

#include<string.h>
int main104()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = (char)(-1 - i);
	}
	printf("%d\n", strlen(a));

	system("pause");
	return 0;
}

//在字符串中找出第一个只出现一次的字符，要求时间复杂度为O(n)。
//哈希映射表
#include<assert.h>
char GetFirstChar(const char* str)
{
	assert(str);
	//26代表所有小写字母
	//int HashTable[26] = { 0 };
	//如果这个字符串不仅仅是小写，还含有其他特殊符号，只需要把哈希映射表扩容到256即可。
	//因为字符是8bit类型，总共有256个字符。
	int HashTable[256] = { 0 };
	char *ch = str;
	while (*ch)
	{
		HashTable[(unsigned char)*ch]++;
		++ch;
	}
	ch = str;
	while (*ch)
	{
		if (HashTable[(unsigned char)*ch] == 1)
		{
			return *ch;
		}
		++ch;
	}
	return -1;
}
int main()
{
	char str[10] = "abaccdeff";
	char ret = GetFirstChar(str);
	printf("%c\n", ret);

	system("pause");
	return 0;
}



