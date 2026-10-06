#include<stdio.h>
int main()
{
    int a;
    int n=0;
    printf("请输入一个非负整数:");
    scanf("%d",&a);
    do {
        a/=10;
        n++;
    } while (a>0) ;
    printf("这个数一共有%d位数",n);


    return 0;
}
