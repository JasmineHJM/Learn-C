#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ʹ�ú���ʵ���������Ľ�����

void fun(int x, int y)
{
	x = x + y;
	y = x - y;
	x = x - y;
	printf("%d %d", x, y);
}
int main()
{
	int i, j;
	printf("���������뽻������������a b \n");
	scanf("%d", &i);
	scanf("%d", &j);
	fun(i, j);
	printf("\n");
	system("pause");
	return 0;
}