#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�B˵����C��C˵����D��D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	//��������Ϊ1��������Ϊ0
	for (A = 0; A < 2; A++)
	{
		for (B = 0; B < 2; B++)
		{
			for (C = 0; C < 2; C++)
			{
				if ((A == 0) + (C == 1) + (D == 1) + (D == 0) == 3)
				{
					if ((A == 0) + (B == 0) + (C == 0) + (D == 0) == 3)
					{
						printf("A = %d, B = %d, C = %d, D = %d\n", A, B, C, D);
					}
				}
			}
		}
	}
	
	system("pause");
	return 0;
}


int main()
{
	char Killer = 0;
	for (Killer = 'A'; Killer <= 'D'; Killer++)
	{
		if ((Killer != 'A') + (Killer == 'C') + (Killer == 'D') + (Killer != 'D') == 3)
		{
			printf("������%c\n", Killer);
		}
	}

	system("pause");
	return 0;
}

