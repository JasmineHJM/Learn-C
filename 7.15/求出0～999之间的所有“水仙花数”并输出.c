#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//���0��999֮������С�ˮ�ɻ������������ 
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������
/*
�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ������������������ķ˹׳����ķ˹��������Armstrong number������ָһNλ�����������֮N�η��͵��ڸ�����
����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
153 = 1^3 + 5^3 + 3^3��
370 = 3^3 + 7^3 + 0^3��
371 = 3^3 + 7^3 + 1^3��
407 = 4^3 + 0^3 + 7^3��
*/

int main()
{
	int i;
	int ones, tens, huns;
	int sum[1000];
	for (i = 0; i < 999; i++)
	{
		sum[i] = i;
		ones = sum[i] % 10;
		tens = sum[i] / 10 % 10;
		huns = sum[i] / 100 % 10;
		int a = ones * ones * ones, b = tens * tens * tens, c = huns * huns * huns;
		if (sum[i] == a + b + c)
		{
			printf("%d ", sum[i]);
		}
	}

	system("pause");
	return 0;
}
