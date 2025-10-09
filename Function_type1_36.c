#include<stdio.h>
void main();
int num ;
void main()
{   printf("enter number:");
    scanf("%d",&num);
	xyz();

}

void xyz(){
		int temp = num;
	int sum = 0;
	int rem = 0;
	for(int i=1;i<=num;)
	{
		rem = num%10;
		sum = sum*10+rem;
		num = num/10;
	}
	printf("%d  \n",sum );
		if(temp == sum)
	{
		printf("%d number is palindrome" ,temp);
	}
	else{
		printf("%d number is not  palindrome" ,temp);
	}

}