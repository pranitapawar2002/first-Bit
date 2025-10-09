#include<stdio.h>
void abc();
int n = 5;
int a = 1;
	
void main()
{
    abc();
	
}

void abc(){
	while(a<=10){
	     int c= n*a;
		printf("%d\n",c);
		a++;
	}
}