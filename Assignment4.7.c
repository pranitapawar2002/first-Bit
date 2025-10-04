#include<stdio.h>
void main()
{
	int fact= 5;
	int temp = 1;
	for(int i=1;i<=fact;i++)
	{
		temp = temp*i;
	}
	printf("%d",temp);
}