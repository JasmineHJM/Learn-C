#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//��Ӣ�絥λת��Ϊ���׵�λ��1Ӣ��=2.54���ף�
int main1()
{
	int x = 0;
	printf("���û�����Ӣ��ֵ��");
	scanf("%d", &x);
	printf("%dӢ�� = %lf����\n", x, x*2.54);

	system("pause");
	return 0;
}