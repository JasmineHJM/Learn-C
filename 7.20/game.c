#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++)
	{
		for (y = 0; y < col; y++)
		{
			board[x][y] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		for (j = 0; j < col; j++)
		{
			if (i != row - 1)
			{
				printf("---");
				if (j < col - 1)
			    {
				    printf("|");
			     }
			}
		}
        printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{

	printf("�����������ӵ�����:");
	while (1)
	{
		  int x = 0;
		  int y = 0;
		  scanf("%d %d", &x, &y);
	      //�ж������Ƿ�Ϸ�
		  if (board[x - 1][y - 1] != ' ')
		  {
			  printf("������������,����������!\n");
			  continue;
		  }
		  if ( (x > 0 && x <= row ) && (y > 0 && y <= col))
		  {
	        	board[x - 1][y - 1] = '*';
				break;
		  }
     }
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������\n");
	while (1)
	{
		//printf("��������\n");
		//�����������һ������
		x = rand() % row;
		y = rand() % col;
		//�ж������Ƿ�Ϸ�
		if (board[x][y] != ' ')
		{
			continue;
		}
		if ((x >= 0 && x < row) && (y >= 0 && y < col))
		{
			board[x][y] = '#';
			break;
		}
	}
	DisplayBoard(board, row, col);
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	//�ж���
	for (x = 0; x < row; x++)
	{
		if ((board[x][1] == board[x][0]) && (board[x][1] == board[x][2]) && board[x][1] != ' ')
		{
			return board[x][1];
		}
	}
	//�ж���
	for (y = 0; y < col; y++)
	{
		if ((board[1][y] == board[0][y]) && (board[1][y] == board[2][y]) && board[1][y] != ' ')
		{
			return board[1][y];
		}
	}
	//�ж϶Խ���
	if ((board[1][1] == board[0][0]) && (board[1][1] == board[2][2]) && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if ((board[1][1] == board[0][2]) && (board[1][1] == board[2][0]) && board[1][1] != ' ')
		{
			return board[1][1];
		}
	//�Ƿ�ƽ��
	int count = 0;
	for (x = 0; x < row; x++)
	{
		for (y = 0; y < col; y++)
		{
			if (board[x][y] != ' ')
			{
				count++;
			}
		}
	}
	if (count == row*col)
	{
		return 'P';
	}
	//δ��ʤ��
    return 'C';
}










