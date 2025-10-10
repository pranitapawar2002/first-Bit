#include<stdio.h>
int abc();

  	
void main()
{ 


  int xyz = abc();
  printf("addition of two numbers is %d",xyz);
  
  }

int abc()
{
  int num1;
  int num2;
  int sum=0;
  printf("enter first number:");
  scanf("%d",&num1);
  printf("enter second number:");
  scanf("%d",&num2);
  sum = num1+num2;	
  return sum;
  
}