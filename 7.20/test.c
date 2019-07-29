#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//打印棋盘
//输入坐标
//判断输赢
//打印结果
void meun()
{
	printf("*******************************\n");
	printf("******       1.play      ******\n");
	printf("******       0.exit      ******\n");
	printf("*******************************\n");

}
void game()
{
	srand((unsigned int)time(NULL));
	char result = ' ';
	char board[ROW][COL];
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		result = IsWin(board, ROW, COL);
		if (result != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		result = IsWin(board, ROW, COL);
		if (result != 'C')
		{
			break;
		}
	}
	DisplayBoard(board, ROW, COL);
	if (result == '*')
	{
		printf("恭喜您,游戏胜利!\n");
	}
	if (result == '#')
	{
		printf("真遗憾,电脑胜利!\n");
	}
	if (result == 'P')
	{
		printf("真遗憾,您和电脑平局了!\n");
	}
}

int main()
{
	int input = 0;
	do{
		meun();
		printf("请玩家输入：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误,请重新输入:\n");
		}
	} while (input);

	system("pause");
	return 0;
}
