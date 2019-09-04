#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main81()
{
	char s[] = "\\123456\123456\t";
	printf("%d\n", strlen(s));
	printf("%s\n", s);

	system("pause");
	return 0;
}

int main82()
{
	int s = 0, n;
	for (n = 0; n < 4; n++)
	{
		switch (n)
		{
		default:s += 4;
		case 1:s += 1;
		case 2:s += 2;
		case 3:s += 3;
		}
	}
	printf("%d\n", s);

	system("pause");
	return 0;
}

int main()
{
	unsigned long ulA = 0x11000000;
	printf("%x\n", *(unsigned char *)&ulA);

	system("pause");
	return 0;
}
