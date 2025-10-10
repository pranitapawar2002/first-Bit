#include<stdio.h>
double abc();
float radius = 2.5;
float p1=3.14;
double main(){
double a = abc();
printf("areaa of circle of radius %2f is %2f\n",radius,a);
}

double abc()
{

float area = p1*radius*radius;
return area;

}
