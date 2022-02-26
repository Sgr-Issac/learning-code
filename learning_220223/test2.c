#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	char arr1[] = "abc";  //数组 'a' 'b' 'c' '\0' 字符串结束标志
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n",strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	return 0;
////}
//int main()
//{
//	int line = 0;
//
//	while (line < 200000){
//		printf("%d\n",line);
//		line++;
//	}
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;


//
//
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n",a);
//}
struct Book
{
	char name;
	short price;

};
int main()
{
	struct Book b1 = { "c语言程序设计", 55 };
	struct Book *pb = &b1;
	b1.price = 15;
	printf("%d\n",(*pb).price);
	printf("%s\n",pb->name);
	return 0;
}