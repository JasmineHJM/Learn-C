#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//1.��ӡ100-200֮�������
int main1()
{
	int i = 0;
	//������������жϳ������еĽ���Ƿ���ȷ
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//��ӡһ������
		//�ж��Ƿ�Ϊ����
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
				break;
		}
		if (i == j)
		{
			printf("%d", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);

	system("pause");
	return 0;
}


int main2()
{
	int i = 0;
	//����һ������n�������n*n�ĳ˷��ھ���
	int n = 0;
	printf("������˷��ھ�������������磺9\n");
	//scanf�û���ָ���ĸ�ʽ�Ӽ����ϰ��������뵽ָ���ı�����
	//����һ��Ҫ��ȡ��ַ����&��������ᱨ��
	scanf("%d", &n);
	//��ӡ��
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		//��ӡ��
		for (j = 1; j <= i; j++)
		{
			//Ϊ������ӡ��������ۣ�����һ���ĸ�ʽ����
			printf("%-2d*%-2d=%-3d ", i, j, i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

int main3()
{
	int year = 0;
	//���1000��2000����������
	for (year = 1000; year <= 2000; year++)
	{
		//�ж��Ƿ�Ϊ����
		if (year % 4 == 0)
		{
			//�ж��Ƿ�Ϊ��ͨ����
			if (year % 100 != 0)
			{
				printf("%d ", year);
			}
		}
		//�ж��Ƿ�Ϊ��������
		if (year % 400 == 0)
		{
			printf("%d ", year);
		}
	}

	system("pause");
	return 0;
}

