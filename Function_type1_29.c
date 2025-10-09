#include<stdio.h>
void xyz();
int temp = 5;
void main()
{  
    xyz();
	
}

void xyz(){
	for(int i=1;i<=10;i++)
	{
	   int num = temp*i;	
	   printf("%d\n",num);	
	}
}