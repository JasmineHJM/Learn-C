#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//完成猜数字游戏。

void meun()
{
	printf("**********************************************\n");
	printf("***************   1.开始游戏   ****************\n");
	printf("***************   2.退出游戏   ****************\n");
	printf("**********************************************\n");
}
void game(int s)
{
	int b = 0;
	printf("请输入一个数字\n");
	while (1)
	{
		scanf_s("%d", &b);
		if (s < b)
			printf("猜大了(^-^)\n");
		if (s > b)
			printf("猜小了(^-^)\n");
		if (b == s)
		{
			printf("猜对啦！恭喜你！！！(^0^)\n");
			break;
		}
	}
}
int main()
{
	//初始随机数生成器
	srand((unsigned)time(NULL));
	//生成随机数（生成100以内的随机数）
	int s = rand() % 101;
	//设置一个变量来选择游戏菜单
	int a;
	do
	{
		meun();
		scanf_s("%d", &a);
		if (a == 1)
			game(s);
	} while (a != 0);

	return 0;
}