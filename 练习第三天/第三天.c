#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main31()
{
	int a = 5;
	if (a = 0)
	{
		printf("%d", a - 10);
	}
	else
	{
		printf("%d", a++);
	}

	system("pause");
	return 0;
}

int main32()
{
	int x, y, z;
	x = z = 2; y = 3;
	if (x > y)
		z = 1;
	else if (x == y)
		z = 0;
	else
		z = -1;
	printf("%d", z);

	system("pause");
	return 0;
}

#include<string.h>
int main33()
{
	char acHello[] = "hello\0world";
	char acNew[15] = { 0 };
	strcpy(acNew, acHello);
	printf("%d\n", strlen(acNew));
	printf("%d\n", sizeof(acHello));

	system("pause");
	return 0;
}

//非递归方法求斐波那契数列的第n项

int fib(int n)
{
	int i = 1;
	int j = 1;
	int count = 3;
	int result = 0;
	if (n <= 2)
	{
		return 1;
	}while (count <= n)
	{
		result = i + j;
		i = j;
		j = result;
		count++;
	}
	return result;
}
int main3s()
{
	int n;
	printf("请输入你想求斐波那契数列的第几项:");
	scanf("%d", &n);
	fib(n);
	printf("斐波那契数列第%d项为:%d\n", n, fib(n));
	return 0;
}
