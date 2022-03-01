

#include "game.h" 
void menu()
{
	printf("*************************\n");
	printf("*****1.play   0.exit*****\n");
	printf("*************************\n");

}

void game()
{
	char board[ROW][COL] = { 0 };//存放棋盘信息 全部空格
	InitBoard(board, ROW, COL);//初始化棋盘
	DisplayBoard(board,ROW,COL);//打印棋盘
}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("请输入正确选择\n");
			break;
		}
	} while (input);
	return 0;
}


int main()
{
	test();
}
