#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//char *strchr(const char *str, int c)
//�ڲ���str��ָ����ַ�����������һ�γ����ַ�c��һ���޷����ַ�����λ�á�
//�ú����������ַ��� str �е�һ�γ����ַ� c ��λ�ã����δ�ҵ����ַ��򷵻� NULL��

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
		printf("������\n");
	}
	else
	{
		printf("%s\n", ret);
	}

	system("pause");
	return 0;
}
