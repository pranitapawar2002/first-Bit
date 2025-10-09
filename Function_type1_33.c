#include<stdio.h>
void xyz();
int num ;
int main()
{   printf("enter number:");
    scanf("%d",&num);
	xyz();
}

void xyz(){
	int temp = num;
	int rem = 0;
    int num1 = 0;
	for(int i=1;i<=num;)
	{
		rem = num%10;
		
		num = num/10;
	//	printf("%d\n",rem);
	    int sum = 1;
		for(int j=i;j<=rem;j++)
		{
			sum = sum*j;
		}
	//	printf("%d\n",sum);
		num1=num1+sum;
}
		printf("%d\n",num1);
		if(temp==num1)
		{
		 printf("%d number is strong \n",num1 );
		}
		else{
			printf("%d number is not strong \n",num1 );
		}

}