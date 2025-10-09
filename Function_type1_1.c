#include<stdio.h>
void abc();

int num1;
  int num2;
  int sum=0;
  	
void main()
{ 

  printf("enter first number:");
  scanf("%d",&num1);
  printf("enter second number:");
  scanf("%d",&num2);
  abc();
  
  }

void abc()
{
  sum = num1+num2;	
  printf("addition of two numbers is %d",sum);
}