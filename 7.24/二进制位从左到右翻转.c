#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//��д������unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//�磺��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�2550136832

unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	unsigned int sum = 0;
	for (i = 0; i < 32; i++)
	{
		sum += ((value >> i)&1)<<(31-i);
	}
	value = sum;

	return value;
}
int main()
{
	int num = 0;
	printf("��������Ҫ��ת�����֣�");
	scanf("%d", &num);
	unsigned int ret = reverse_bit(num);
	printf("%u\n", ret);
	
	system("pause");
	return 0;
}
