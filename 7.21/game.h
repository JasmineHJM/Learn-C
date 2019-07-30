#define _CRT_SECURE_NO_WARNINGS 1

#define ROW  9
#define COL  9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//初始化棋盘
void InitBoard(char show[ROWS][COLS], char mine[ROWS][COLS]);
//打印游戏棋盘
void DisplayBoard(char show[ROWS][COLS]);
//随机放置炸弹
void SetMine(char mine[ROWS][COLS]);
//玩家找出炸弹
void FineMine(char show[ROWS][COLS], char mine[ROWS][COLS]);
