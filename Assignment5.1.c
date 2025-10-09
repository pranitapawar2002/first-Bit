#include<stdio.h>
void main()
{
	int num1=1;
	int num2 = 1000;
	int temp = 0;
	int rem = 0;
	
	for(int i=num1;i<=num2;i++)
	{
	  temp=i;
	  int sum = 0;
	  while(temp>0)
	  {
	  	rem = temp%10;
	  	sum = sum+(rem*rem*rem);
	  	temp =temp/10;
	  	
	  }
	  if(i == sum)
	  {
	  	printf("%d", i);
	  	printf("\n");
	  	
	  }
	  
}
	}