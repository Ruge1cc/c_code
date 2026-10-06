#include<stdio.h>
int main()
{
    int f=0;
    int x=0;
    scanf("%d",&x);

    if  (x<0) {
        f=-1;
    } else if   (x>=0&&x<=3){
        f=2*x;
    } else {
        f=3*x;
    }
        printf("½á¹ûÊÇ£º%d",f);
        return 0;

}
