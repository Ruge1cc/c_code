#include<stdio.h>
#include<stdlib.h> 
int main()
{
	int hour1,min1; 
	int hour2,min2; 
	int a=0;
	
	printf("请输入两个时间，格式为x时x分\n");
	
	scanf("%d时%d分\n",&hour1,&min1);
	
	scanf("%d时%d分\n",&hour2,&min2);
	a=hour1*60+min1-hour2*60-min2;
	hour1=a/60;
	min1=a%60;
	printf("时间差为%d小时%d分钟",hour1,min1);
	
	system("pause");
	return 0;
} 
