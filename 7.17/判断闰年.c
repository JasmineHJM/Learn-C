#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ʵ��һ�������ж�year�ǲ������ꡣ

void fun(int year)
{
	int i;
	i = year;
	if (i % 4 == 0 && i % 100 != 0)
	{
		printf("��һ��������\n");

	}
	else if (i % 400 == 0)
	{
		printf("��һ��������\n");
	}
	else
	{
		printf("��һ�겻������\n");
	}
}
int main()
{
	int year = 0;
	printf("������������ҵ����\n");
	scanf("%d", &year);
	fun(year);
	system("pause");
	return 0;
}