#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//��ɲ�������Ϸ��

void meun()
{
	printf("**********************************************\n");
	printf("***************   1.��ʼ��Ϸ   ****************\n");
	printf("***************   2.�˳���Ϸ   ****************\n");
	printf("**********************************************\n");
}
void game(int s)
{
	int b = 0;
	printf("������һ������\n");
	while (1)
	{
		scanf_s("%d", &b);
		if (s < b)
			printf("�´���(^-^)\n");
		if (s > b)
			printf("��С��(^-^)\n");
		if (b == s)
		{
			printf("�¶�������ϲ�㣡����(^0^)\n");
			break;
		}
	}
}
int main()
{
	//��ʼ�����������
	srand((unsigned)time(NULL));
	//���������������100���ڵ��������
	int s = rand() % 101;
	//����һ��������ѡ����Ϸ�˵�
	int a;
	do
	{
		meun();
		scanf_s("%d", &a);
		if (a == 1)
			game(s);
	} while (a != 0);

	return 0;
}