#include <stdio.h>

int main()
{
	printf("%d\n", sizeof(short*));//ָ�����;����ܹ����ʵĿռ�
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));

	int a = 0x11223344;
	int * pa = &a;
	char * pc = &a; //ָ�����;�����ָ��Ĳ���
	printf("%p\n", pa);
	printf("%p\n", pa+1); 
	printf("%p\n", pc);
	printf("%p\n", pc+1);

	int arr[10] = { 0 };
	int* p = arr; //����������Ԫ�صĵ�ַ
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}
	return 0;
}