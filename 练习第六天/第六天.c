#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int fun6(int a, int b)
{
	if (a > b)
		return(a + b);
	else
		return(a - b);
}
int main61()
{
	int x = 3, y = 8, z = 6, r;
	r = fun6(fun6(x, y), 2 * z);
	printf("%d\n", r);

	system("pause");
	return 0;
}

int f(int a)
{
	int b = 0;
	static int c = 3;
	a = c++, b++;

	return(a);
}
int main62()
{
	int a = 2, i, k;
	for ( i = 0; i < 2; i++)
	{
		k = f(a++);
	}
	printf("%d\n", k);

	system("pause");
	return 0;
}

int x = 3;
void inc()
{
	static int x = 1;
	x *= (x + 1);
	printf("%d", x);
	return;
}
int main()
{
	int i;
	for ( i = 1; i < x; i++)
	{
		inc();
	}

	system("pause");
	return 0;
}





