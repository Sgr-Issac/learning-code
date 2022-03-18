#include "contact.h"
#include <string.h>

void InitContact(struct Contact* ps)
{
    memset(ps->data,0,sizeof(ps->data));
    ps->size=0;//设置通讯录最初只有一个元素
}

void AddContact(struct Contact* ps)
{
    if(ps->size==MAX)
    {
        printf("通讯录已满，无法增加\n");
    }
    else
    {
        printf("请输入名字:>\n");
        scanf("%s",ps->data[ps->size].name);
        printf("请输入年龄:>\n");
        scanf("%d",&(ps->data[ps->size].age));
        printf("请输入性别:>\n");
        scanf("%s",ps->data[ps->size].gender);
        printf("请输入电话:>\n");
        scanf("%s",ps->data[ps->size].tele);
        printf("请输入地址:>\n");
        scanf("%s",ps->data[ps->size].addr);
        
        ps->size++;
        printf("添加成功\n");
    }
}

void ShowContact(const struct Contact* ps)
{
    if(ps->size==0)
    {
        printf("通讯录为空\n");
    }
    else{
        int i=0;
        printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n","名字","年龄", "性别","电话","地址");
        for (i=0;i<ps->size; i++)
        {
            printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n",
                   ps->data[i].name,
                   ps->data[i].age,
                   ps->data[i].gender,
                   ps->data[i].tele,
                   ps->data[i].addr);
        }
    }
}

static int FindByName(struct Contact*ps,char name[MAX_NAME])
{
    int i=0;
    //size=5
    for(i=0;i<ps->size;i++)
    {
        if(0==strcmp(ps->data[i].name,name))
        {
            return i;
        }
    }
    return -1;
}

void DelContact(struct Contact* ps)
{
    char name[MAX_NAME];
    printf("请输入要删除人的名字:>");
    scanf("%s",name);
    //1.查找要删除的位置 找到了返回下标，找不到返回-1
    int pos=FindByName(ps,name);
    if(pos==ps->size)
    {
        printf("要删除的人不存在\n");
    }
    else
    {
        //删除数据
        int j=0;
        for(j=pos;j<ps->size-1;j++)
        {
            ps->data[j]=ps->data[j+1];
        }
        ps->size--;
        printf("删除成功");
    }
}

void SearchContact(const struct Contact* ps)
{
    char name[MAX_NAME];
    printf("请输入要查找人的名字:>");
    scanf("%s",name);
    int pos=FindByName(ps,name);
    if(pos==-1)
    {
        printf("此人不存在\n");
    }
    else{
        printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n","名字","年龄", "性别","电话","地址");
        printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n",
               ps->data[pos].name,
               ps->data[pos].age,
               ps->data[pos].gender,
               ps->data[pos].tele,
               ps->data[pos].addr);
    }
}


void ModifyContact(struct Contact* ps)
{
    char name[MAX_NAME];
    printf("请输入要查找人的名字:>");
    scanf("%s",name);
    int pos=FindByName(ps,name);
    if(pos==-1)
    {
        printf("此人不存在\n");}
    else{
            printf("请输入名字:>\n");
            scanf("%s",ps->data[ps->size].name);
            printf("请输入年龄:>\n");
            scanf("%d",&(ps->data[ps->size].age));
            printf("请输入性别:>\n");
            scanf("%s",ps->data[ps->size].gender);
            printf("请输入电话:>\n");
            scanf("%s",ps->data[ps->size].tele);
            printf("请输入地址:>\n");
            scanf("%s",ps->data[ps->size].addr);
            printf("修改成功\n");
    }
}
