#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��

int main()
{
	int a = 0;
	int b = 0;
	int ave = 0;
	printf("����������Ҫ��ƽ��ֵ����������");
	scanf("%d %d", &a, &b);
	a > b ? a : b;
	ave = b + (a - b) / 2;
	printf("%d + %d��ƽ��ֵΪ��%d\n", a, b, ave);

	system("pause");
	return 0;
}

