#ifndef contact_h
#define contact_h

#include <stdio.h>
#endif /* contact_h */

#define MAX 1000

#define MAX_NAME 20
#define MAX_GENDER 5
#define MAX_TELE 12
#define MAX_ADDR 30

struct PeoInfo
{
    char name[MAX_NAME];
    int age;
    char gender[MAX_GENDER];
    char tele[MAX_TELE];
    char addr[MAX_ADDR];
};

struct Contact
{
    struct PeoInfo data[MAX]; //存放一个信息
    int size; //记录当前已经有的元素个数
};

enum Option  //提高代码的可读性
{
    EXIT,
    ADD,
    DEL,
    SEARCH,
    MODIFY,
    SHOW,
    SORT
};
//声明函数
void InitContact(struct Contact* ps);

void AddContact(struct Contact* ps);

void ShowContact(const struct Contact* ps);

void DelContact(struct Contact* ps);

void SearchContact(const struct Contact* ps);

void ModifyContact(struct Contact* ps);

