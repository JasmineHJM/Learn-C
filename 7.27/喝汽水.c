#define _CRT_SECURE_NO_WARNINGS 1

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int money = 0;
	int price = 1;//����
	int empty = 2;//��ƿ����
	int total = 0;//����ˮ��
	printf("����������Ǯ����ˮ��");
	scanf("%d", &money);

	//if (money > 0)
	//	total = money * 2 - 1;
	//else
	//	total = 0;

	total += money;
	empty = money;
	while (empty >= 2)
	{
		//������ˮ��ƿ�ӳ�2�����´κȵ���ˮ
		total += empty / 2;
		//����ʣ��������ƿ��
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", total);

	system("pause");
	return 0;
}
