#include<stdio.h>
double abc();
float height = 3.0;
float base = 5.0;
float area=0;
 double main()
{
	double a=abc();
    printf("area of triangle is %2f\n",a);
}

double abc()
{
	area = (base * height) /2;
   return area;
    
}