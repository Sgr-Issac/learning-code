#include <stdio.h>
#include<time.h>
#include<stdlib.h>
//
//int main()
//{
//	printf("%d\n", sizeof(short*));//ָ�����;����ܹ����ʵĿռ�
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//
//	int a = 0x11223344;
//	int * pa = &a;
//	char * pc = &a; //ָ�����;�����ָ��Ĳ���
//	printf("%p\n", pa);
//	printf("%p\n", pa+1); 
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	int arr[10] = { 0 };
//	int* p = arr; //����������Ԫ�صĵ�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//const int MAX = 3;
//
//int main()
//{
//	int var[] = { 10, 100, 200 };
//	int i, *ptr;
//
//	ptr = var;//ָ�� ��������Ԫ�صĵ�ַ
//	i = 0; 
//	while (ptr <= &var[MAX - 1])
//	{
//		printf("�����ַ:var[%d]=%p\n", i, ptr);
//		printf("����ֵ:var[%d]=%d\n", i, *ptr);
//
//		//ָ����һ��Ԫ��λ��
//		ptr++;
//		i++;
//	}
//	return 0;
//
//}

//const int MAX = 3;

//int main()
//{
//	int var[] = { 10, 100, 200 };
//	int i, *ptr[3];
//
//	for (i = 0; i < 3; i++)
//	{
//		ptr[i] = &var[i];
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("value of var[%d]=%d\n",i,*ptr[i]);
//	}
//
//	
//	return 0;
//
//}
//
//void getSeconds(unsigned long *par);
//
//int main()
//{
//	unsigned long sec;
//
//	getSeconds(&sec);
//
//	printf("Number of seconds:%ld\n", sec);
//
//	return 0;
//}
//
//void getSeconds(unsigned long *par)
//{
//	*par = time(NULL);
//	return;
//}

//���ɺͷ���������ĺ���
int *getRandom()
{
	static int r[10];
	int i;

	//��������
	srand((unsigned)time(NULL));
	for (i = 0; i < 10; ++i)
	{
		r[i] = rand();
		printf("%d\n", r[i]);
	}
	return r;
}

int main()
{
	int *p;
	int i;

	p = getRandom();
	for (i = 0; i < 10; i++)
	{
		printf("*(p+[%d]):%d\n", i, *(p + i));

	}
	return 0;
}