#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//��ӡ����
//��������
//�ж���Ӯ
//��ӡ���
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
		printf("��ϲ��,��Ϸʤ��!\n");
	}
	if (result == '#')
	{
		printf("���ź�,����ʤ��!\n");
	}
	if (result == 'P')
	{
		printf("���ź�,���͵���ƽ����!\n");
	}
}

int main()
{
	int input = 0;
	do{
		meun();
		printf("��������룺");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������,����������:\n");
		}
	} while (input);

	system("pause");
	return 0;
}
