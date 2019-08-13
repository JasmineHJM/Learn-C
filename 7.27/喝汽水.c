#define _CRT_SECURE_NO_WARNINGS 1

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int money = 0;
	int price = 1;//单价
	int empty = 2;//空瓶子数
	int total = 0;//喝汽水数
	printf("你可以买多少钱的汽水：");
	scanf("%d", &money);

	//if (money > 0)
	//	total = money * 2 - 1;
	//else
	//	total = 0;

	total += money;
	empty = money;
	while (empty >= 2)
	{
		//喝完汽水后瓶子除2等于下次喝的汽水
		total += empty / 2;
		//考虑剩余奇数的瓶子
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", total);

	system("pause");
	return 0;
}
