#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���

void fun(int x)
{
	int i, j;
	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d = %-2d ", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int x = 0;
	printf("�����������ӡ�˷��ھ���n������\n");
	scanf("%d", &x);
	fun(x);

	system("pause");
	return 0;
}