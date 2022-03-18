//动态内存分配
//栈区：局部变量，函数形参
//堆区：动态内存分配[ malloc free ,calloc realloc]
//静态区：全局变量，静态变量
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
int main() {
    //向内存申请10个整形空间
    int* p=(int*)malloc(10*sizeof(int));
    //calloc(10,sizeof(int)); 区别：把每个字节初始化为0
    
    if(p==NULL)
    {
        //打印错误原因
//        printf("%s\n",strerror(errno));
    }
    else{
        for (int i=0; i<20; i++) {
            *(p+i)=i;
            printf("%d ",*(p+i));
        }
        printf("\n");
    }
    //realloc 调整开辟的动态空间的大小
    int* p2=realloc(p, 40);
    for (int i=0; i<50; i++) {
        *(p2+i)=i;
        printf("%d ",*(p2+i));}
    //释放空间
    free(p);
    return 0;
}
