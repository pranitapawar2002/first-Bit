#include<stdio.h>
int abc();
int year ;
int main()
{  printf("enter first number:");
  scanf("%d",&year);
    abc();
    int a= abc();
    if(a==0){
       printf("year is leap year");
	}
	else{
		printf("year is not leap year");
	}
	
}
int abc()
{
	if(year%4==0 && year%100!=0 || year%400==0 )
	{
		return 0;
	}
	else{
		return 1;
	}
}