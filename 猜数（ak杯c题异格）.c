#include<stdio.h>
#include<stdlib.h>

void com(int a,int b){
    if (a<b){
        printf("<\n");
    } else if (a>b){
        printf(">\n");
    } else {
        printf("=\n");
    }
}

int main() {
    int t,x,n;
    int i=0,j=0;
    int a=0;
    char b=0;
    scanf("%d",&t);
    while(i<t) {
        b=0,j=0;
        scanf("%d",&n);    
        a= 1+rand() % n;
        scanf("%c",&b);
        for(j=0;j<40;j++){
            if(b=='?'){
                scanf("%d",&x);
                com(x,a);
                fflush(stdout);
            } else if (b=='!'){
                scanf("%d",&x);
               com(x,a);
               break;
            } else if (b==-1){
                return 0;
            }
            scanf("%c",&b);
        }
        i++;
        fflush(stdout);
    }


    return 0;

}