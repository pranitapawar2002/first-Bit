#include<stdio.h>
void abc();
int num = 19;
void main(){
	
	abc();
}

void abc(){
	if(num%2==0){
		printf("num is even");
	}
	else{
		printf("num is odd");
	}
}