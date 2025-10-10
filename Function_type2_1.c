#include<stdio.h>
int isPrime();      // function declaration
int main()
{
	int res;
	res = isPrime();   //function call
	if(res==1)
        printf("prime");
    else
        printf("not prime");
}

int isPrime()     //function defination
{
	int no;
	int flag=0;
	printf("enter number:");
	scanf("%d",&no);
	for(int i=2;i<no;i++)
	{
		if(no%i==0)
		{
			return 0;
		}
	}
	
	if(flag==0)
	   return 1;
	else
	    return 0;
	
}
