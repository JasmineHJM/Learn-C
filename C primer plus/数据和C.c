#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main31()
{
	int num = 0;
	printf("����һ��ASCII��ֵ����66����");
	scanf("%d", &num);
	printf("%c\n", num);

	system("pause");
	return 0;
}

int main32()
{
	printf("\a");
	printf("Startled by the sudden sound,Sally shouted,\n\"By the Great Pumpkin, what was that!\"\n");

	system("pause");
	return 0;
}

int main33()
{
	float num = 0.0;
	printf("Enter a floating-point value:");
	scanf("%f", &num);
	printf("fixed-point notation:%f\n", num);
	printf("exponential notation:%e\n", num);

	system("pause");
	return 0;
}

int main34()
{
	int age = 0;
	printf("�������������䣺\n");
	scanf("%d", &age);
	printf("%d�������ת��������Ϊ%lf��\n", age, age*3.156*10e7);

	system("pause");
	return 0;
}

int main35()
{
	int water = 0;
	printf("������ˮ�Ŀ�������\n");
	scanf("%d", &water);
	printf("%d���ѵ�ˮ��ˮ��������Ϊ%lf��\n", water, water*950/(3.0*10e-23));

	system("pause");
	return 0;
}

int main36()
{
	int height = 0;
	printf("������������ߣ�Ӣ�磩��\n");
	scanf("%d", &height);
	printf("�������Ϊ%lf����\n", height*2.54);

	system("pause");
	return 0;
}
