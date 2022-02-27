//#include <stdio.h>
////switch case(整形常量表达式) break语句
//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1: //注意冒号
//
//		if (n == 1)
//			printf("工作日\n");
//		printf("hhhh\n"); //可再次嵌套if语句 也可直接再次嵌套switch语句
//		break;  //每一条语句以；结束
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break; //加break 良好习惯
//	default:   //
//		printf("输入错误,请输入1-7");
//		break;
//
//	}
//	return 0;
//}


//循环语句
//int main()
//{
//	int i = 1;
//	while(i<=10)//（表达式），0为false，非0为true
//	{
//		//i++;
//		if (i == 5)
//			//break;  break 直接退出循环
//			continue; //continue后面语句不再执行，跳到while 终止本次循环
//		printf("%d\n",i);
//		//i++;
//	}
//	return 0;
//}

//int main()
//{
////	int ch=getchar(); //从键盘获取任意一个字符
////	putchar(ch); //等于printf("%c\n",ch);
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
//	printf("请输入密码");
//	scanf_s("%d",password); //数组不用取地址  **输入缓冲区 还剩一个/n  ##scanf的特性
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认Y?");
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
//	for (i = 1; i <11; i++)  // 初始化 判断 调整（都可以省略->恒为真） //不可在for循环体内改变循环变量  //前闭后开写法
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
//int main() //从大到小排序
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

