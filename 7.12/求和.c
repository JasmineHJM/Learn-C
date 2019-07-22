#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//Çó1-1/2+1/3-...+1/99-1/100µÄºÍ
int main()
{
	int i = 0;
	int j = 0;
	double sum = 0;
	for (i = 1; i <= 100; i++)
	{
		if ((i & 1) == 1)
		{
			sum = sum + 1.0 / i;
		}
		else if ((i & 1) == 0)
		{
			sum = sum + (1.0 / i)*(-1);
		}
	}
	printf("%f ", sum);

	system("pause");
	return 0;
}

int main()
{
	int i = 0;
	double sum = 0;
	for (i = 1; i < 100; i+=2)
	{
		sum = sum + 1.0 / i;
	}
	for (i = 2; i <= 100; i+=2)
	{
		sum = sum + (1.0 / i)*(-1);
	}
	printf("%f ", sum);

	system("pause");
	return 0;
}
