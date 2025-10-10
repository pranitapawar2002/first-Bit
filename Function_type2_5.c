#include<stdio.h>
int abc();
int c = 10;
int main()
{
	int a= abc();
	printf("%d C is %d Fh",c,a);
}

 int abc()
{  
	int fer = (c*9/5)+32;
	return fer;
	
}