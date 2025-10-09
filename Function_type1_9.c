#include<stdio.h>
void abc();
int num1 ;
int num2 ;
int temp ;
void main()
{
	printf("before swap\n");
    printf(" enter first number is ");
     scanf("%d",&num1);
    printf(" enter second number is ");
     scanf("%d",&num2);
      abc();
      
}

void abc()
{
	
	
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("after swap \n");
    printf("first number is %d\n",num1);
    printf("second number is %d\n",num2);
    
}