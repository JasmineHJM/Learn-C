#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);
//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);
//�������
//1.���Ƿ���������Ϸ�
//2.�ж��Ƿ�������
//3.��ӡ����
void PlayerMove(char board[ROW][COL], int row, int col);
//�����������
//1.���Ƿ���������Ϸ�
//2.�ж��Ƿ�������
//3.��ӡ����
void ComputerMove(char board[ROW][COL], int row, int col);
//�ж���Ӯ.���Ӯ'*',����Ӯ'#',ƽ��'P',����'C'
//1.��,Ӯ,ƽ�ֶ�����
//2.û��ûӮûƽ�ּ�����Ϸ
char IsWin(char board[ROW][COL], int row, int col);

