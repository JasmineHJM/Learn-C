#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void Func(char str_arg[2])
{
	int m = sizeof(str_arg);
	int n = strlen(str_arg);
	printf("%d\n", m);
	printf("%d\n", n);
}
int main91(void)
{
	char str[] = "Hello";
	Func(str);

	system("pause");
	return 0;
}

int main92()
{
	const char *p = "Hello,world";

	system("pause");
	return 0;
}

int main93()
{
	int a, x;
	for (a = 0, x = 0; a <= 1 && !x++; a++);
	{
		a++;
	}
	printf("%d %d", a, x);


	system("pause");
	return 0;
}

int main94()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int *p1 = (int*)(&a + 1);
	int *p2 = (int*)((int)a + 1);
	int *p3 = (int*)(a + 1);
	printf("%d, %x, %d\n", p1[-1], p2[0], p3[1]);

	system("pause");
	return 0;
}
