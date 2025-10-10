#include<stdio.h>
int abc();
int start ;
int end ;
int sum = 0 ;
int main(){
	printf("enter starting number:");
  scanf("%d",&start);
  printf("enter ending number:");
  scanf("%d",&end);
   int xyz = abc();
	printf("%d",xyz);

}

int abc(){
	while(start<=end ){
	 sum = sum+start;
	 start++;
	 	}
	 	
	 return sum;	
}