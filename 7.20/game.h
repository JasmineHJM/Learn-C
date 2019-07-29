#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家落子
//1.看是否落子坐标合法
//2.判断是否有棋子
//3.打印棋盘
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑随机落子
//1.看是否落子坐标合法
//2.判断是否有棋子
//3.打印棋盘
void ComputerMove(char board[ROW][COL], int row, int col);
//判断输赢.玩家赢'*',电脑赢'#',平局'P',继续'C'
//1.输,赢,平局都结束
//2.没输没赢没平局继续游戏
char IsWin(char board[ROW][COL], int row, int col);

