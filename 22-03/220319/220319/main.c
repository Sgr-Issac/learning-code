
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//    int*p=(int*)malloc(40);
//    if(p==NULL){
//        return 0;
//    }
//    int i=0;
//    for (i=0; i<=10; i++) {
//        *(p+i)=i;
//        printf("%d ",*(p+i));
//    }
//    free(p);  //注意内存泄漏的问题
//    p=NULL;
//
//    return 0;
//}

//柔性数组 结构体中最后一个元素允许是未知大小的数组
struct S
{
    int n;
    int arr[];//未知大小的 柔性数组成员 数组大小是可以调整的
};

int main()
{
//    struct S s;
//    printf("%d\n",sizeof(s));
    struct S *ps=malloc(sizeof(struct S)+5*sizeof(int));//为柔性数组开辟空间
    ps->n=100;
    
    int i=0;
    for (i=0; i<5; i++) {
        ps->arr[i]=i;
        printf("%d\n",*(ps+i));
    }
    free(ps);
    ps=NULL;
    return 0;
}
