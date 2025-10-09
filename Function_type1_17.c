#include<stdio.h>
void xyz();
int a;
int b;
int c;
	
void main(){
  printf("enter first number:");
  scanf("%d",&a);
  printf("enter second number:");
  scanf("%d",&b);
  printf("enter third number:");
  scanf("%d",&c);
	xyz();
	
	}
	
void xyz()
{
	if(a>b  && a>c){
		printf("a is greater");
	}
	else{
		if(b>c){
			printf("b is greater");
		}
		else{
			printf("c is greater");
		}
	
	
	}

}