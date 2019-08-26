#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int Change(int *pX)
{
	int y = 8;
	y = y - *pX;
	pX = &y;

	return 0;
}

int main51()
{
	int xx = 3;
	int *pY = &xx;
	Change(pY);
	printf("%d\n", *pY);

	system("pause");
	return 0;
}

#include<string.h>
int main52()
{
	char arr[2][4];
	strcpy((char*)arr, "you");
	strcpy(arr[1], "me");
	arr[0][3] = '&';
	printf("%s\n", arr);

	system("pause");
	return 0;
}

int fun(int x)
{
	int count = 0;
	while (x)
	{
		count++;
		x = x & (x - 1);
	}

	return count;
}
int main53()
{	
	printf("fun(2017)=%d\n", fun(2019));

	system("pause");
	return 0;
}

#define CIR(r) r*r
void main54()
{
	int a = 1;
	int b = 2;
	int t;
	t = CIR(a + b);
	printf("%d\n", t);

	system("pause");
	return 0;
}
