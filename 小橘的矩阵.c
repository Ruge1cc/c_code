#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    int j,i,n;
    int a,b,ans;
    scanf("%d",&n);
    ans=0;
    int s[200][200];

    for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                scanf("%d",&s[i][j]);
                if(s[i][j]==1){
                    a=i;
                    b=j;
                }
            }
        }
    ans += abs((n+1)/2-a);
    ans += abs((n+1)/2-b);

    printf("%d\n",ans);    
    return 0;
}

