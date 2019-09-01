#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main71()
{
	int m = 0;
	int n = 0;
	for (m = 0, n = -1; n = 0; m++, n++)
		n++;

	system("pause");
	return 0;
}

int a = 1;
void test()
{
	int a = 1;
	a += 1;
}
int main72()
{
	test();
	printf("%d", a);

	system("pause");
	return 0;
}

int main73()
{
	int i = 0;
	int j = 0;
	if (++i > 0 || ++j > 0)
	{
		printf("i = %d, j = %d\n", i, j);
	}

	system("pause");
	return 0;
}

#define MOD(x, y) x%y
int main74()
{
	int a = 13, b = 94;
	printf("%d\n", MOD(b, a + 4));
	system("pause");
	return 0;
}

int main75()
{
	int x = 0;
	switch (++x)
	{
	case 0: ++x;
	case 1: ++x;
	case 2:++x;
	default:
		break;
	}
	printf("%d\n", x);

	system("pause");
	return 0;
}
