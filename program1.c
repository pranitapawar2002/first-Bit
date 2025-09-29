#include<stdio.h>
void main()
{
	int a = 10;
	int b = 20;
	int c= 30;
	int d;
	d = a++ || b++ && c++;
	printf("%d %d %d",a,b,c);
	
}