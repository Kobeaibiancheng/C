#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void menu()
{
	printf("**********************************\n");
	printf("***********    1.play      *******\n");
	printf("***********    0.exit      *******\n");
	printf("**********************************\n");
}
void game()
{
	char ret = 0;
	char board[ROW-3][COL-3] = { 0 };
	InitBoard(board, ROW, COL);//��ʼ������
	DisplayBoard(board, ROW, COL);//��ӡ����
	while (1)
	{
		PlayerMove(board, ROW, COL);//�����
		DisplayBoard(board, ROW, COL);//��ӡ����
		ret = IsWiner(board, ROW, COL);
		//�ж���Ӯ
		if ('*' == ret)
		{
			printf("���Ӯ\n");
			break;
		}
		else if ('#' == ret)
		{
			printf("����Ӯ\n");
			break;
		}
		else if ('p' == ret)
		{
			printf("ƽ��\n");
			break;
		}
		ComputerMove(board, ROW, COL);//������
		DisplayBoard(board, ROW, COL);//��ӡ����
		ret = IsWiner(board, ROW, COL);
		//�ж���Ӯ
		if ('*' == ret)
		{
			printf("���Ӯ\n");
			break;
		}
		else if ('#' == ret)
		{
			printf("����Ӯ\n");
			break;
		}
		else if ('p' == ret)
		{
			printf("ƽ��\n");
			break;
		}
	}
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("������>\n");
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
			printf("�������\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}