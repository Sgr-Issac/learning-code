#include <stdio.h>

int main()
{
	printf("%d\n", sizeof(short*));//指针类型决定能够访问的空间
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));

	int a = 0x11223344;
	int * pa = &a;
	char * pc = &a; //指针类型决定了指针的步长
	printf("%p\n", pa);
	printf("%p\n", pa+1); 
	printf("%p\n", pc);
	printf("%p\n", pc+1);

	int arr[10] = { 0 };
	int* p = arr; //数组名是首元素的地址
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}
	return 0;
}