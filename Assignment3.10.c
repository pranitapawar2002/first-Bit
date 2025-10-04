#include<stdio.h>
void main()
{
	int n = 12345;
	int n1,n2,sum;
	  
	  
		n1=n%10;
		printf("%d",n1);
      	while(n>=10){	
		n=n/10;

    }
		sum = n1+n;

	printf(" sum of first and last digit is %d",sum);
	
}