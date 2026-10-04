#include<stdio.h>
int main()

{
	int price=0;
	printf("请输入小于100的金额\n");
	scanf("%d",&price);
	int a=100-price;
	
	printf("剩余金额：%d\n",a);
	
	system("pause");
	return 0;
} 
