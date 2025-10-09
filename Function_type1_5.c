#include<stdio.h>
void abc();
int num1 = 5;
void main()
{
  printf("enter number:");
  scanf("%d",&num1);
	abc();
}

void abc()
{
	int square = num1*num1;
	printf("square of %d is %d   ",num1,square);
	int cube = num1*num1*num1;
	printf("cube of %d is %d",num1,cube);
	

}