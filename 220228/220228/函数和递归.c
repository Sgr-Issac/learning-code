#include <stdio.h>
#include "add.h" //�Զ���ͷ�ļ����õķ�ʽ
#include <string.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum= Add(a,b);
//	printf("%d\n", sum);
//	return 0;
//
//}

//int main()
//{
//	printf("hh\n");
//	main();  //ջ��� ջ�����ֲ��������βΣ���������̬���ٵ��ڴ棻��̬����ȫ�ֱ�����static
//	return 0;
//
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d\n", n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//	print(num);
//	return 0;
//
//}

//int my_strlen(char* str)
//{
//	/*int count = 0;   //ѭ���ķ�ʽ
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;*/
//	if (*str != '\0') //�ݹ�ķ�ʽ
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr); //������Ԫ�صĵ�ַ ����ָ��
//	printf("%d\n", len);
//	return 0;
//
//}

//int Facl(int n)
//{
//	if (n > 1)
//	{
//		return n*Facl(n - 1);
//	}
//	else
//		return 1;
//	
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d,\n", &n);
//	ret = Facl(n);
//	printf("%d", ret);
//	return 0;
//}
//long Fib(int n)  
//{
//	//if (n <= 2)//�ݹ�ʵ��
//	//	return 1;
//	//else
//	//	return Fib(n - 1) + Fib(n - 2);
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d,\n", &n);
//	ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}