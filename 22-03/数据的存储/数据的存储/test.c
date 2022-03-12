#include<stdio.h>

//设计小程序判断机器的字节序
//int check_sys()
//{
//	int a = 1;
//	char *p = (char*)&a;
//	//返回1 小端
//	//返回2 大端
//		return *p;
////}
//
//int check_sys()
//{
//	int a = 1;
//	//返回1 小端
//	//返回2 大端
//	return *(char*)&a;
//}
//int main()
//{
//
//	int ret=check_sys();
//	if (ret == 1)
//	{
//		printf("小端存储\n");
//	}
//	else
//	{
//		printf("大端存储\n");
//	}
//	return 0;
//}

int main()
{
	unsigned int i;
	for (i = 9; i>=0; i--)
	{
		printf("%u\n", i);
	}
	return 0;
}