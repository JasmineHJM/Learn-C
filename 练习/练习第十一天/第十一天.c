#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>


int fun(char *s)
{
	char *p = s;
	while (*p != '\0')
	{
		p++;
	}
	return(p - s);
}
int main111()
{
	printf("%d\n", fun("goodbye!"));

	system("pause");
	return 0;
}

int main112()
{
	unsigned char a = 0xA5;
	unsigned char b = ~a >> 4 + 1;
	printf("%d\n", a);
	printf("%d\n", b);

	system("pause");
	return 0;
}

int main113()
{
	const int i = 0;
	int *j = (int *)&i;
	*j = 1;
	printf("%d, %d\n", i, *j);

	system("pause");
	return 0;
}

//���ַ������ҵ���һ���ظ����ֵ��ַ�
#define SIZE 256
char FindChar(char* str)
{
	char a[SIZE] = { 0 };
	char* tmp = str;
	while (*str)
	{
		a[*str]++;
		str++;
	}
	str = tmp;
	while (*str)
	{
		if (a[*str] >= 2)
		{
			return *str;
		}
		str++;
	}
	return 0;
}
int main()
{
	char str[] = "qywyer23tdd";
	char c = FindChar(str);
	if (c)
	{
		printf("%c\n", c);
	}
	else 
	{
		printf("δ�ҵ��ظ����ֵ��ַ���\n");
	}
	system("pause");
	return 0;
}