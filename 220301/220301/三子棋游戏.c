

#include "game.h" 
void menu()
{
	printf("*************************\n");
	printf("*****1.play   0.exit*****\n");
	printf("*************************\n");

}

void game()
{
	char board[ROW][COL] = { 0 };//���������Ϣ ȫ���ո�
	InitBoard(board, ROW, COL);//��ʼ������
	DisplayBoard(board,ROW,COL);//��ӡ����
}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��������ȷѡ��\n");
			break;
		}
	} while (input);
	return 0;
}


int main()
{
	test();
}
