#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ʵ��һ���������ж�һ�����ǲ���������

void fun(int num)
{
	int i = 0;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("�������������\n");
			break;
		}
	}
	if (i >= num)
	{
		printf("�����������\n");
	}
}
int main()
{
	int num = 0;
	printf("���������������֣�\n");
	scanf("%d", &num);
	if (num == 1 || num == 0)
	{
		printf("�������������\n");
	}
	fun(num);
	system("pause");
	return 0;
}
