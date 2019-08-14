#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。

int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money);

	if (money>0)
		total = money * 2 - 1;
	else
		total = 0;

	/*total += money;
	empty = money;
	while(empty>=2)
	{
	total += empty/2;
	empty = empty/2 + empty%2;
	}*/

	printf("%d\n", total);
	return 0;
}
