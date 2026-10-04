#include<stdio.h>
int main()
{
    int price=0;
    int bill=0;

    printf("请输入价格");
    scanf("%d",&price);
    printf("请输入纸币面额");
    scanf("%d",&bill);

    if  (bill>=price) {
            printf("应该找您%d元",bill-price);
                   }
    else {
            printf("你的钱不够");
                   }
    return 0;

}
