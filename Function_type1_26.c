#include<stdio.h>
void abc();
int a ;

	void main()
	{
		printf("enter number:");
		scanf("%d",&a);
		abc();
		
	}
void abc(){
int a1,a3;
a3= a;
int a2=0;

	while(a!=0){
		
		  a1 = a%10;
		  a2= a2*10+a1;
		  a= a/10;	
		}
		
		
	if(a3 == a2)
	{
		printf("%d number is palindrome" ,a3);
	}
	else{
		printf("%d number is not  palindrome" ,a3);
	}
		
}