#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main141()
{
	int a = 2, *p1, **p2;
	p2 = &p1;
	p1 = &a;
	a++;
	printf("%d,%d,%d\n", a, *p1, **p2);

	system("pause");
	return 0;
}

int main142()
{
	int k, j, s;
	for (k = 2; k < 6; j++)
	{
		s = 1;
		for (j = k; j < 6; j++)
			s += j;
	}
	printf("%d\n", s);

	system("pause");
	return 0;
}

int main143()
{
	int arr[] = { 6, 7, 8, 9, 10 };
	int *ptr = arr;
	*(ptr++) += 123;
	printf("%d,%d", *ptr, *(++ptr));

	system("pause");
	return 0;
}

//��дһ����������һ�������Ƿ��ǻ�����
int main(void)
{
	int num;

	fprintf(stdout, "������һ����������");

	/* ��ȡ������û����� */
	while (1)
	{
		if (fscanf(stdin, "%d", &num) != 1)
		{
			fprintf(stderr, "����������������룺");
			while (getchar() != '\n'); // ȥ������ķǷ��ַ� 
			continue;
		}
		else if (num <= 0)             // �����������Ϊ����
		{
			fprintf(stderr, "�����������������������");
			continue;
		}
		else
			break;
	}

	/* �������жϣ���ת�� */
	int temp = num;
	int reverse;

	while (temp != 0)
	{
		reverse *= 10;
		reverse += (temp % 10);
		temp /= 10;
	}

	/* ��鷭תǰ�������Ƿ���� */
	if (reverse == num)
	{
		fprintf(stdout, "%d Ϊ������\n", num);
	}
	else
	{
		fprintf(stdout, "%d ���ǻ�����\n", num);
	}

	return 0;
}