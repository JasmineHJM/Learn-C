#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>


int main11()
{
	int a[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24 };
	int *q[4] = { 0 };
	int k = 0;
	for (k = 0; k < 4; k++)
	{
		q[k] = &a[k * 3];
	}
	printf("%d\n", q[3][1]);

	system("pause");
	return 0;
}

int main12()
{
	int i, j, a = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (j % 2)
				break;
			a++;
		}
		a++;
	}
	printf("%d\n", a);

	system("pause");
	return 0;
}

int main21()
{
	const char *p = "Hello!";
	printf("%c\n", *p);

	system("pause");
	return 0;
}

int main22()
{
	int a = 10;
	a += a *= a -= a / 3;
	printf("%d\n", a);

	system("pause");
	return 0;
}

int main23()
{
	int i = 0;
	while (i < 10)
	{
		if (i < 1)
			continue;
		if (i == 5)
			break;
		i++;
	}

	system("pause");
	return 0;
}
