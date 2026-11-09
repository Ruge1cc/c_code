#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int q,i,n,flag;
    char s[25],t[25];
    
    scanf("%d",&q);
    while(q--){
        int count[26] ={0};
        scanf("%d",&n);
        scanf("%s %s",s,t);
    
        for(i=0;i<n;i++){
            count[ s[i] - 'a']++;
            count[ t[i] - 'a']--;
        }
        flag=1;
        for(i=0;i<26;i++){
            if(count[i]!=0){
               flag=0;
               break;
            }
        }
        if(flag==1){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

