#include<stdio.h>
void abc();
int minutes = 100;
int main()
{
	abc();
	
}

void abc()
{
	int hours = minutes/60;
	int remaining = minutes % 60;
	printf("%d minutes is %d hours and %d minutes \n",minutes,hours,remaining);
}