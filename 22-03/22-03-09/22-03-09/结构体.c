#include<stdio.h>





////�����ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char gender[5];
//};// s1, s2, s3;//����ȫ�ֵĽṹ�����

typedef struct Stu
{
	//��Ա����
	char name[20];
	short age;
	char tele[12];
	char gender[5];
} Stu;//typedef�����

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
	struct Stu s = {"issac",30,"4564664","male"};  //�����ֲ��ṹ�����
	printf1(s);
	printf2(&s);
	return 0;
}