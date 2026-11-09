#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    
    int i,ans=0;
    char a[300]={0};
    char b[300]={0};
    scanf("%s",a);
    scanf("%s",b);
    int l1=strlen(a);
    int l2=strlen(b);
    
    if(l1>l2){
        l2=l1;
    }else if(l1<l2){
        l1=l2;
    }
    for(i=0;i<l1;i++){
        ans=a[i]-b[i];
    }
    printf("%d",ans);

    return 0;
}

