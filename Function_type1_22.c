#include<stdio.h>
void abc();
int start ;
int end ;
int sum = 0 ;
void main(){
	printf("enter starting number:");
  scanf("%d",&start);
  printf("enter ending number:");
  scanf("%d",&end);
	abc();

}

void abc(){
		while(start<=end ){
	 sum = sum+start;
	 start++;
	 	}
	 	
	 	printf("%d",sum);
}