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

int mian() {
    return 0;
}