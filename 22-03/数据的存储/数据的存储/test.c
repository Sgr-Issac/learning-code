#include<stdio.h>

//���С�����жϻ������ֽ���
//int check_sys()
//{
//	int a = 1;
//	char *p = (char*)&a;
//	//����1 С��
//	//����2 ���
//		return *p;
////}
//
//int check_sys()
//{
//	int a = 1;
//	//����1 С��
//	//����2 ���
//	return *(char*)&a;
//}
//int main()
//{
//
//	int ret=check_sys();
//	if (ret == 1)
//	{
//		printf("С�˴洢\n");
//	}
//	else
//	{
//		printf("��˴洢\n");
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