#include<stdio.h>
void abc();
int age;
void main(){
	printf("enter age :");
	scanf("%d",&age);
	abc();
	
}

void abc()
{
	if(age>=18){
		printf("person is eligible to vote");
	}
	else{
		printf("person is not eligible to vote");
	}
}