#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//初始化棋盘
void InitBoard(char show[ROWS][COLS], char mine[ROWS][COLS])
{
	int x = 0;
	int y = 0;
	for (x = 0; x < ROWS; x++)
	{
		for (y = 0; y < COLS; y++)
		{
			//给玩家展示的棋盘
			show[x][y] = '*';
			//放置炸弹的棋盘
			mine[x][y] = '0';
		}
	}
}

//打印游戏棋盘
void DisplayBoard(char show[ROWS][COLS])
{
	int i = 0;
	int j = 0;
	//打印行列序号和棋盘格式
	printf("  | ");
	for (i = 1; i <= ROW; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	printf("---------------------\n");
	for (i = 1; i <= ROW; i++)
	{
		printf("%d | ", i);
		for (j = 1; j <= COL; j++)
		{
			printf("%c ", show[i][j]);
		}
		printf("\n");
	}
}

//随机放置炸弹
void SetMine(char mine[ROWS][COLS])
{
	int x = 0;
	int y = 0;
	//炸弹的数量（全局变量）
	int count = EASY_COUNT;
	while (count)
	{
		x = rand() % ROW + 1;
		y = rand() % COL + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//计算输入的坐标在放置炸弹的棋盘上的周围有几个炸弹
int get_mine(char mine_map[ROWS][COLS], int x, int y)
{
	int count = 0;
	if (mine_map[x - 1][y] == '1')
	{
		count++;
	}
	if (mine_map[x - 1][y - 1] == '1')
	{
		count++;
	}
	if (mine_map[x][y - 1] == '1')
	{
		count++;
	}
	if (mine_map[x + 1][y - 1] == '1')
	{
		count++;
	}
	if (mine_map[x + 1][y] == '1')
	{
		count++;
	}
	if (mine_map[x + 1][y + 1] == '1')
	{
		count++;
	}
	if (mine_map[x][y + 1] == '1')
	{
		count++;
	}
	if (mine_map[x - 1][y + 1] == '1')
	{
		count++;
	}
	return count;
}

//当输入坐标不是炸弹时，展开一部分不是炸弹的坐标，并计算这些坐标周围有多少炸弹
void open_board(char mine[ROWS][COLS], char show[ROWS][COLS], int i, int j)
{
	if (mine[i][j] == '0'&&i >= 0 && j >= 0 && show[i][j] == '*')
	{
		show[i][j] = get_mine(mine, i, j) + '0';
	}
	if (mine[i][j - 1] == '0'&&i >= 0 && j - 1 >= 0 && show[i][j - 1] == '*')
	{
		show[i][j - 1] = get_mine(mine, i, j - 1) + '0';
		if (get_mine(mine, i, j - 1) == 0)
		{
			open_board(mine, show, i, j - 1);
		}
	}
	if (mine[i][j + 1] == '0'&&i >= 0 && j + 1 >= 0 && show[i][j + 1] == '*')
	{
		show[i][j + 1] = get_mine(mine, i, j + 1) + '0';
		if (get_mine(mine, i, j + 1) == 0)
		{
			open_board(mine, show, i, j + 1);
		}
	}
	if (mine[i - 1][j] == '0'&&i - 1 >= 0 && j >= 0 && show[i - 1][j] == '*')
	{
		show[i - 1][j] = get_mine(mine, i - 1, j) + '0';
		if (get_mine(mine, i - 1, j) == 0)
		{
			open_board(mine, show, i - 1, j);
		}
	}
	if (mine[i - 1][j - 1] == '0'&&i - 1 >= 0 && j - 1 >= 0 && show[i - 1][j - 1] == '*')
	{
		show[i - 1][j - 1] = get_mine(mine, i - 1, j - 1) + '0';
		if (get_mine(mine, i - 1, j - 1) == 0)
		{
			open_board(mine, show, i - 1, j - 1);
		}
	}
	if (mine[i - 1][j + 1] == '0'&&i - 1 >= 0 && j + 1 >= 0 && show[i - 1][j + 1] == '*')
	{
		show[i - 1][j + 1] = get_mine(mine, i - 1, j + 1) + '0';
		if (get_mine(mine, i - 1, j + 1) == 0)
		{
			open_board(mine, show, i - 1, j + 1);
		}
	}
	if (mine[i + 1][j + 1] == '0'&&i + 1 >= 0 && j + 1 >= 0 && show[i + 1][j + 1] == '*')
	{
		show[i + 1][j + 1] = get_mine(mine, i + 1, j + 1) + '0';
		if (get_mine(mine, i + 1, j + 1) == 0)
		{
			open_board(mine, show, i + 1, j + 1);
		}
	}
	if (mine[i + 1][j] == '0'&&i + 1 >= 0 && j >= 0 && show[i + 1][j] == '*')
	{
		show[i + 1][j] = get_mine(mine, i + 1, j) + '0';
		if (get_mine(mine, i + 1, j) == 0)
		{
			open_board(mine, show, i + 1, j);
		}
	}
	if (mine[i + 1][j - 1] == '0'&&i + 1 >= 0 && j - 1 >= 0 && show[i + 1][j - 1] == '*')
	{
		show[i + 1][j - 1] = get_mine(mine, i + 1, j - 1) + '0';
		if (get_mine(mine, i + 1, j - 1) == 0)
		{
			open_board(mine, show, i + 1, j - 1);
		}
	}

}

//玩家找出炸弹
void FineMine(char show[ROWS][COLS], char mine[ROWS][COLS])
{
	int x = 0;
	int y = 0;
	int count = 0;
	while (1)
	{
		printf("请玩家输入要排查的坐标(^-^)：");
		scanf("%d %d", &x, &y);
		if (x < 1 || x > ROW || y < 1 || y > COL)
		{
			printf("输入错误！Σ(`д`lll)\n");
			continue;
		}
		else if (mine[x][y] == '1')
		{
			printf("很遗憾，你被炸死了！v( -ι_- )v\n");
			break;
		}
		else
		{
			open_board(mine, show, x, y);
			DisplayBoard(show);
		}
		for (x = 1; x <= ROW; x++)
		{
			for (y = 1; y <= COL; y++)
			{
				if (show[x][y] == '*')
				{
					count++;
				}
			}
		}
		if (count == 10)
		{
			printf("恭喜你，游戏胜利！(*^-^)=3\n");
			break;
		}
		count = 0;
	}
}
