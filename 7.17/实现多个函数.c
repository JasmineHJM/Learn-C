#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����һ�����飬ʵ�ֺ���init������ʼ�����顢ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��

void init(int a[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		a[i] = 0;
	}
}
void empty(int a[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		a[i] = 0;
	}
}
void reverse(int a[], int size)
{
	int i;
	int j;
	for (i = 0; i < size / 2; i++)
	{
		j = a[i];
		a[i] = a[size - i - 1];
		a[size - 1 - i] = j;
	}
}
int main()
{
	int a[3] = { 1, 2, 3 };
	int i = 0;
	int size = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < size; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	init(a, size);
	for (i = 0; i < size; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	for (i = 0; i < size; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	empty(a, size);
	for (i = 0; i < size; i++)
	{
		a[i] = i + 1;
		printf("%d", a[i]);
	}
	printf("\n");
	for (i = 0; i < size; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	reverse(a, size);
	for (i = 0; i < size; i++)
	{
		printf("%d", a[i]);
	}
	system("pause");
	return 0;
}
