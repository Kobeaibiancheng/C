#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//�ж������Ƿ�����
static int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i<row; i++)
	{
		for (j = 0; j<col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

//���̳�ʼ��
void InitBoard(char board[ROW][COL], int row, int col)
{
	memset(board, ' ', row*col*sizeof(board[0][0]));
}


//��ӡ����
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
				printf("|");
		}
		printf("\n");
		for (j = 0; j < col; j++)
		{
			if (i < row - 1)
			printf("--- ");
		}
		printf("\n");
	}
}


//�����
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����>");
	while (1)
	{
		scanf("%d%d", &x, &y);
		if (x <= row && x >= 1 && y <= col && y >= 1)
		{
			if (board[x-1][y-1] == '*'||board[x-1][y-1] == '#')
			{
				printf("���걻ռ��\n");
			}
			else
			{
				board[x - 1][y - 1] = '*';
				break;
			}
		}
		else
			printf("����������������������\n");
	}
}


//������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������>\n");
	while (1)
	{
		x = rand()%row;
		y = rand()%col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}



//�ж���Ӯ
char IsWiner(char board[ROW][COL], int row, int col)
{
	/*int i = 0;
	int j = 0;
	int count = 0;
	for (i = 0; i < row; i++)
	{
		count = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == '*')
				count++;
		}
		if (count == row)
			return '*';
	}
	for (j = 0; j < row; j++)
	{
		count = 0;
		for (i = 0; i < col; i++)
		{
			if (board[i][j] == '*')
				count++;
		}
		if (count == row)
			return '*';
	}	*/
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == '*' && board[i][1] == '*' && board[i][2] == '*')
			return '*';
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == '*' && board[1][i] == '*' && board[2][i] == '*')
			return '*';
	}
	if (board[0][0] == '*' && board[1][1] == '*' && board[2][2] == '*')
		return '*';
	if (board[0][2] == '*' && board[1][1] == '*' && board[2][0] == '*')
		return '*';
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == '#' && board[i][1] == '#' && board[i][2] == '#')
			return '#';
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == '#' && board[1][i] == '#' && board[2][i] == '#')
			return '#';
	}
	if (board[0][0] == '#' && board[1][1] == '#' && board[2][2] == '#')
		return '#';
	if (board[0][2] == '#' && board[1][1] == '#' && board[2][0] == '#')
		return '#';


	if (IsFull(board, ROW, COL) == 1)
		return 'p';

	return 'c';

}

