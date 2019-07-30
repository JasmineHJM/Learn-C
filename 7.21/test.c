#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void meun()
{
	printf("*************************************\n");
	printf("******|-----------------------|******\n");
	printf("******|         1.play        |******\n");
	printf("******|         0.exit        |******\n");
	printf("******|-----------------------|******\n");
	printf("*************************************\n");

}

void game()
{
	srand((unsigned int)time(NULL));
	char show[ROWS][COLS];
	char mine[ROWS][COLS];
	InitBoard(show, mine);
	DisplayBoard(show);//打印游戏棋盘
	SetMine(mine);
	//DisplayBoard(mine);//打印放置炸弹的棋盘，便于测试
	FineMine(show, mine);

}

int main()
{
	int input = 0;
	do
	{
		meun();
		printf("请玩家输入\(^o^)/：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏~( ·︵· )~\n");
			break;
		default:
			printf("输入错误，请重新输入Σ(っ °Д °;)っ\n");
		}
	} while (input);

	system("pause");
	return 0;
}
