#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字。
//例如：2 + 22 + 222 + 2222 + 22222

int main()
{
	int x = 2;
	int n;
	int sum = 0;
	for (n = 1; n <= 5; n++)
	{
		sum = sum + x;
		x = x * 10 + 2;
	}
	printf("%d\n", sum);

	system("pause");
	return 0;
}
