#define _CRT_SECURE_NO_WARNINGS 1

#define ROW  9
#define COL  9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//��ʼ������
void InitBoard(char show[ROWS][COLS], char mine[ROWS][COLS]);
//��ӡ��Ϸ����
void DisplayBoard(char show[ROWS][COLS]);
//�������ը��
void SetMine(char mine[ROWS][COLS]);
//����ҳ�ը��
void FineMine(char show[ROWS][COLS], char mine[ROWS][COLS]);
