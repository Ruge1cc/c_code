#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[7];
    int n,i,sum=0;
    int day=1;
    scanf("%d",&n);
    for(i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;

    if(n==0) { 
        day=0;
    } else{
        while(sum<n)
        {
            sum+=a[i];
            i++;
            if(i==7)
            {i=0;}
            if (sum>=n){break;}
            day++;
        }
    }
    printf("%d",day);

    return 0;
}