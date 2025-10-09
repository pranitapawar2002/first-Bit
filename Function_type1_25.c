#include<stdio.h>
void abc();
int n = 5;
int n1 = 1;
int n3 = 1;

void main()
{
	abc();
	
}

void abc(){
	while(n1<=n)
	{
	  n3= n3*n1;
	  
	  n1++;	
	}
	printf("%d\n",n3);

}