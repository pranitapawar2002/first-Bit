#include<stdio.h>
void abc();

	float num1=10;
	float num2=20;
	float num3=40;
	float num4=30;
	float num5=50;
	
	float sum;
	float average;

void main(){
	
abc();	
}

void abc()
{
	sum= num1+num2+num3+num4+num5;
	average =sum/5;
	printf("average of 5 no.is %2f",average);
	
}