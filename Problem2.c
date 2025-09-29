#include<stdio.h>
void main(){
	int num = 121;
	int r1,r2,r3,r4,rev,q1;
	r1 = num %10;
	q1 = num / 10;
	r2 = q1 %10;
	r3 = q1/10;
	rev = r1*100+r2*10+r3;
	if(rev==num)
	{
		printf("num is palindrome");
	}
	else{
		printf("num is not palindrome ");
	}
}