#include<stdio.h>
void main()
{
	int num=153;
	int temp = num;
	int sum = 0;
	int rem = 0;
	for(int i=1;i<=temp;i++)
	{   
	    rem=num%10;
		sum = sum+(rem*rem*rem);
		num=num/10;
	}
	printf("%d\n",sum);
	if(temp==sum)
	{
		printf("%d number is armstrong",temp);
	}
	else{
		printf("%d number is not armstrong",temp);
	}
}