#include<stdio.h>





////创建结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char gender[5];
//};// s1, s2, s3;//创建全局的结构体变量

typedef struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char gender[5];
} Stu;//typedef起别名

void printf1(Stu tmp)
{
	printf("%s",tmp.name);
}

void printf2(Stu* ps)
{
	printf("%s", ps->tele);
}

int main()
{
	struct Stu s = {"issac",30,"4564664","male"};  //创建局部结构体变量
	printf1(s);
	printf2(&s);
	return 0;
}