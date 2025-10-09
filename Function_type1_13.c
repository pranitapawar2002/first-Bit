#include<stdio.h>
void abc();
int year ;
void main()
{  printf("enter first number:");
  scanf("%d",&year);
    abc();
	
}
void abc()
{
	if(year%4==0 && year%100!=0 || year%400==0 )
	{
		printf("year is leap year");
	}
	else{
		printf("year is not leap year");
	}
}