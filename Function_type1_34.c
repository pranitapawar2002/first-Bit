#include<stdio.h>
void xyz();
int fact;
void main()
{    printf("enter number:");
    scanf("%d",&fact);
	xyz();
	
}

void xyz(){
	int temp = 1;
	for(int i=1;i<=fact;i++)
	{
		temp = temp*i;
	}
	printf("%d",temp);
}