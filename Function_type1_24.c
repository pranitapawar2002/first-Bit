#include<stdio.h>
void abc();
int num = 153;
void main()
{   
   printf("enter number:");
  scanf("%d",&num);
	abc();
	
}

void abc(){
	int num1 = num;
	int no,sum;
	sum=0;
    while(num!=0)
    {
        no=num%10;
		sum = sum+(no*no*no);
		num = num/10;
	
	}
	printf("%d\n",sum);
	
	if(num1 == sum)
	{
		printf("%d number is armstrong" ,num1);
	}
	else{
		printf("%d number is not armstrong" ,num1);
	}
}