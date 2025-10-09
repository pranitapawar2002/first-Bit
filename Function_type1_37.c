#include<stdio.h>
void xyz();
	int num ;
void main()
{    
printf("enter number:");
scanf("%d",&num);
xyz();
	
}

void xyz(){
	int last = num%10;
	printf("%d\n",last);
	int first = 0;
	for(int i=1;num>=10;)
	{
		num = num/10;
	}
	first = num;
	printf("%d\n",first);
	int sum = first+last;
	printf("the addition of first and last digit is %d",sum);
}