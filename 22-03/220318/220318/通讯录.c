//位段。  --节省空间 不跨平台 ---网络协议的封装
//struct S
//{
//    int a:2; //2个比特位
//    int b:5;
//    int c:10;
//    int d:30; //30个比特位
//};
//
//struct S
//{
//    char a:3;
//    char b:4;
//    char c:5;
//    char d:4;
//};
//
//int main(  )
//{
//    struct S s={0};
//    s.a=10;
//    s.b=20;
//    s.c=3;
//    s.d=4;
//
//    printf("%d\n",sizeof(s));
//    return 0;
//}

//---枚举

//enum Sex
//{
//    MALE,  //枚举常量 可初始化
//    FEMALE,
//    SECRET
//};
//int main()
//{
//    enum Sex s=MALE;
//    printf("%d %d %d\n",MALE,FEMALE,SECRET);
//    return 0;
//}


//----共用体类型  共用空间：最少是最大成员的大小，但是还需要对齐到最大最齐数的最大整数倍
//union Un
//{
//    char c;
//    int i;
//};
//
//int main()
//{
//    union Un u;
//    printf("%d\n",sizeof(u));
//    printf("%p\n",&u);
//    printf("%p\n",&(u.c));
//    printf("%p\n",&(u.i));
//    return 0;
//}



//通讯录小项目
//1.存放1000个好友信息
//姓名
//电话
//性别
//住址
//年龄
//2.增、删、查、改、打印好友信息

#include "contact.h"
void menu()
{
    printf("************************************\n");
    printf("*******1.add         2.del    ******\n");
    printf("*******3.search      4.modify ******\n");
    printf("*******5.show        6.sort   ******\n");
    printf("*******0.exit                 ******\n");
    printf("************************************\n");
}
int main()
{
    int input =0;
    //创建通讯录
    struct Contact con;//con就是通讯录 ，里边包含：1000个元素的数和size
    //初始化通讯录
    InitContact(&con);
    //实现一个菜单
    do{
        menu();
        printf("请选择->");
        scanf("%d",&input);
        switch(input)
        {
            case ADD:
                AddContact(&con);
                break;
            case DEL:
                DelContact(&con);
                break;
            case SEARCH:
                SearchContact(&con);
                break;
            case MODIFY:
                ModifyContact(&con);
                break;
            case SHOW:
                ShowContact(&con);
                break;
            case SORT:
                break;
            case EXIT:
                printf("退出通讯录\n");
                break;
            default:
                printf("选择错误\n");
                break;
                
        }
    }while(input);
    return 0;
}
