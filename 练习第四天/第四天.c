#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main41()
{
	char a[20];
	char *p1 = (char *)a;
	char *p2 = (char *)(a + 5);
	int n = p2 - p1;
	printf("%d", n);

	system("pause");
	return 0;
}

#define F(X,Y) ((X)+(Y))
int main42()
{
	int a = 3, b = 4;
	printf("%d\n", F(a++, b++));

	system("pause");
	return 0;
}
int main43()
{
	int x = 5 > 1 + 2 && 2 || 2 * 4 < 4 != 0;
	printf("%d\n", x);

	system("pause");
	return 0;
}

int main44()
{
	int i = 1, sum = 0;
	while (i < 10)
	{
		sum = sum + 1;
		i++;
	}
	printf("i = %d, sum = %d", i, sum);

	system("pause");
	return 0;
}

#pragma pack(4)
int main45(int argc, char* argv[])
{
	struct tagTest1
	{
		short a;
		char d;
		long b;
		long c;
	};
	struct tagTest2
	{
		long b;
		short c;
		char d;
		long a;
	};
	struct tagTest3
	{
		short c;
		long b;
		char d;
		long a;
	};
	struct tagTest1 stT1;
	struct tagTest2 stT2;
	struct tagTest3 stT3;

	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));

	system("pause");
	return 0;
}
#pragma pack()

enum ENUM_A
{
	X1,
	Y1,
	Z1 = 5,
	A1,
	B1
};
enum ENUM_A enumA = Y1;
enum ENUM_A enumB = B1;
int main46()
{
	printf("%d %d", Y1, B1);

	system("pause");
	return 0;
}

int fun(int x, int y)
{
	static int m = 0;
	static int i = 2;
	i += m +1;
	m = i + x + y;

	return m;
}
void main47()
{
	int j = 4;
	int m = 1;
	int k;
	k = fun(j, m);
	printf("%d,", k);
	k = fun(j, m);
	printf("%d\n", k);

	system("pause");
	return;
}

//写一个函数，求unsigned int型变量x在内存中的二进制1的个数
int Numberof(unsigned int x)
{
	int count = 0;
	while (x)
	{
		++count;
		x = (x - 1)&x;
	}

	return count;
}

int main4s()
{
	unsigned int x = 0;
	printf("请输入一个unsigned int 型的变量x:\n");
	scanf("%d", &x);
	printf("%d\n", Numberof(x));

	system("pause");
	return 0;
}
