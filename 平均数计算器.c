#include <stdio.h>

int main()
{
   int number;
   int sum=0;
   int count=0;
   printf("请输入多个正整数，每输一个按一下回车，输入-1表示结束\n");

   do {
        scanf("%d",&number);
        if (number != -1) {
          sum += number;
          count++;
        }
   } while (number != -1) ;

   printf("这些数的平均数是%f",sum*1.0/count);

    return 0;
}
