#include<stdio.h>
void abc();
int a = 1;
void main()
{
     abc();
	
}
void abc(){
	while(a<=10)
	{
		printf("%d\n",a);
		a++;
	}
}