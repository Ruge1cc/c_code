#include<stdio.h>
int main()
{
   int x;
   int a;
   int ret=0;
   printf("请输入一个正整数\n");
   scanf("%d",&x);
   while (x>0) {
      a=x%10;
      x/=10;
      ret=ret*10+a;
   }
   printf("%d",ret);

    return 0;
}
