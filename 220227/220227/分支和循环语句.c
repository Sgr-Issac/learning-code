//#include <stdio.h>
////switch case(���γ������ʽ) break���
//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1: //ע��ð��
//
//		if (n == 1)
//			printf("������\n");
//		printf("hhhh\n"); //���ٴ�Ƕ��if��� Ҳ��ֱ���ٴ�Ƕ��switch���
//		break;  //ÿһ������ԣ�����
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break; //��break ����ϰ��
//	default:   //
//		printf("�������,������1-7");
//		break;
//
//	}
//	return 0;
//}


//ѭ�����
//int main()
//{
//	int i = 1;
//	while(i<=10)//�����ʽ����0Ϊfalse����0Ϊtrue
//	{
//		//i++;
//		if (i == 5)
//			//break;  break ֱ���˳�ѭ��
//			continue; //continue������䲻��ִ�У�����while ��ֹ����ѭ��
//		printf("%d\n",i);
//		//i++;
//	}
//	return 0;
//}

//int main()
//{
////	int ch=getchar(); //�Ӽ��̻�ȡ����һ���ַ�
////	putchar(ch); //����printf("%c\n",ch);
//	int ch = 0; //ctrl z
//	while (ch = getchar() != EOF) //end of file ->-1
//	{
//		putchar(ch);
//	};
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	int ret = 0;
//	int ch = 0;
//	printf("����������");
//	scanf_s("%d",password); //���鲻��ȡ��ַ  **���뻺���� ��ʣһ��/n  ##scanf������
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��Y?");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("success");
//	else
//		printf("defeat");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <11; i++)  // ��ʼ�� �ж� ������������ʡ��->��Ϊ�棩 //������forѭ�����ڸı�ѭ������  //ǰ�պ�д��
//	{
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d  ", i);
//	}
//		
//	return 0;
//}


////do while
//int main()
//{
	/*int i = 1;
	do
	{
		printf("%d", i);
		i++;
	} while (i <= 10);*/
//	int re = 1;
//	int n = 0;
//	int sum = 0;
//	for (n = 1; n <= 4; n++)
//	{
//		re = re*n;
//		sum = sum + re;
//	}
//	printf("%d", sum);
//
//	return 0;
//int main() //�Ӵ�С����
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d%d%d",&a,&b,&c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d",a,b,c);
//	return 0;
//}

