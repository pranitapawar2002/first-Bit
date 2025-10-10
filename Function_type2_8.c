#include<stdio.h>
int abc();
int num = 10;
int main(){
	
	int a= abc();
	if(a==0){
		printf("number is even");
	}
	else{
		printf("number is odd");
	}
	
}

int abc(){
	if(num%2==0){
		return 0;
	}
	else{
		  return 1;
	}
}