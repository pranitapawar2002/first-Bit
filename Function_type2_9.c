#include<stdio.h>
int abc();
int main(){
   
	 int a= abc();
	 if(a==0)
	 {
     	printf("num is palindrome");

     }
     else{
     	printf("num is not 123 palindrome");

     }
}

int abc()
{
	int num ;
	int r1,r2,r3,r4,rev,q1;
    printf("enter number:");
   scanf("%d",&num);
	r1 = num %10;
	q1 = num / 10;
	r2 = q1 %10;
	r3 = q1/10;
	rev = r1*100+r2*10+r3;
	if(rev==num)
	{
		return 0;
	}
	else{
		return 1;
	}
}