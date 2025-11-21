#include<stdio.h>
struct Distance{
	double cm;
	double feet;
	double inch;
};
void main()
{
	struct Distance d;
	printf("enter distance in centimeter:");
	scanf("%d",&d.cm);
	 d.feet = d.cm/30;
       d.inch = d.cm/0.394;
	 
	 printf("feet = %dl\n",d.feet);
	printf("inch = %dl",d.inch);
}