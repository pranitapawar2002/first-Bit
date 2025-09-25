#include<stdio.h>
int main()
{
	float maths = 80;
	float marathi = 90;
	float english = 70;
	float science = 85;
	float computer = 80;
	float total ;
	total = maths+marathi+english+science+computer;
	float whole;
	whole = 100*5;
	float percentage;
	percentage = (total / whole)*100;
	printf("percentage is %2f\n",percentage);
    return 0;
}