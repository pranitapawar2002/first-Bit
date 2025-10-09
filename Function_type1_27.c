#include<stdio.h>
void abc();
int n ;
void main()
{   printf("enter number:");
	scanf("%d",&n);
	abc();
	
}

void abc(){
	int n1,n2,sum;
	  
	  
		n1=n%10;
	//	printf("%d",n1);
      	while(n>=10){	
		n=n/10;

    }
		sum = n1+n;

	printf(" sum of first and last digit is %d",sum);
}