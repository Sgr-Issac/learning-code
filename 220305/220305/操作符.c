#include <stdio.h>
#include<math.h>
#include <stdlib.h>
//
//int main()
//{
//	int a = 500; //ͳ��a�������м���1
//	int count = 0;
//
//	//while (a)
//	//{
//	//	if (a % 2 == 1)
//	//	{
//	//		count++;
//	//		a = a / 2;
//	//	}
//	//}
//
//	//��λ��ķ���
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == (a >> i & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()   ��1-100��ż����
//{
//	int num1 = 1;
//	int sum1 = 0;
//	int num2 = 0;
//	int sum2 = 0;
//
//	//while (num1 < 100)
//	//{
//	//	sum1+= num1;
//	//	num1 += 2;
//	//}
//	//do
//	//{
//	//	sum2 += num2;
//	//	num2 += 2;
//	//} while (num2 < 101);
//
//	for (num1 = 1; num1 < 100; num1 += 2)
//	{
//		sum1 += num1;
//	}
//	for (num2 = 2; num2 < 101; num2 += 2)
//	{
//		sum2 += num2;
//	}
//	printf("%d\n%d\n", sum1,sum2);
//	return 0;
//}
//
////������ƽ����
//double DoSqurt(double z)
//{
//	double a = 1;
//	double b = 0;
//	double c = 0;
//	do{
//		if (b*b < z)
//		{
//			b += a;
//		}
//		else
//		{
//			c = b;
//			b -= a;
//			a /= 10;
//
//		}while (a>0.00000001);
//	return (b + c) / 2;
//	}
//
//
//int main����
//{
//	double x, y;
//	printf("������һ�����֣�");
//	scanf_s("%lf", &x);
//	if (x < 0)
//	{
//		printf("�������");
//	}
//	else
//	{
//		y = DoSqurt(x);
//		printf("%g��ƽ����Ϊ:%g.\n", x, y);
//	}
//
//	int z = 1;
//	do{
//		main();
//		z++;
//	} while (z > 10);
//	return 0;
//}

//��100���ڵ�����
//int main()
//{
//	int i, j;
//	printf("100���ڵ�������:\n");
//	for (i = 2; i < 100; i++)
//	{
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//			if (j>sqrt(i));
//			printf("%d,\t", i);
//		}
//	}
//	
//	return 0;
//}

//ö����switch
//int main()
//{
//	enum color{red=1,green,blue};
//	enum color favorite_color;
//
//	printf("��������ϲ������ɫ����1.red, 2.green ,3.blue��");
//	scanf_s("%u",&favorite_color);
//
//	switch (favorite_color)
//	{
//	case red:
//		printf("����ϲ����ɫ");
//		break;
//	case green:
//		printf("����ϲ����ɫ");
//		break;
//	case blue:
//		printf("����ϲ����ɫ");
//		break;
//	default:
//		printf("��û��ѡ����ɫ");
//		break;
//	}
//	return 0;
//}