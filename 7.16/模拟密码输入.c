#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, ������󣬿����������룬����������Ρ�
//���ξ�������ʾ�˳�����

int main()
{
	char password[] = "715921";
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		char input[100] = { 0 };
		scanf("%s", input);
		if (strcmp(password, input) == 0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("��½ʧ�ܣ�������\n");
		}
	}
	if (i == 3)
	{
		printf("�����������δ������룬��½ʧ��\n");
	}
	system("pause");
	return 0;
}
