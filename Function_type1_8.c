#include<stdio.h>
void abc();
float maths = 80;
	float marathi = 90;
	float english = 70;
	float science = 85;
	float computer = 80;
	float total ;
	float whole;
int main()
{
	abc();
	  
}

void abc()
{
	total = maths+marathi+english+science+computer;
	whole = 100*5;
	float percentage;
	percentage = (total / whole)*100;
	printf("percentage is %2f\n",percentage);
  
}