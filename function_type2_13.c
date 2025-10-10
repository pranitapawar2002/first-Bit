#include<stdio.h>
int abc();
int age;
int main(){
	printf("enter age :");
	scanf("%d",&age);
	 int a = abc();
	 if(a==0)
		printf("person is eligible to vote");
	else
	    printf("person is not eligible to vote");
	    
	
}

int abc()
{
	if(age>=18)
	   return 0;
	else
	    return 1;
}