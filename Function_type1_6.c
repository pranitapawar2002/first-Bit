#include<stdio.h>
void abc();
float radius = 2.5;
float p1=3.14;
int main(){
   abc();
}

void abc()
{
float area = p1*radius*radius;
printf("areaa of circle of radius %2f is %2f\n",radius,area);


}