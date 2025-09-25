#include<stdio.h>
int main()
{
	int num1 = 10;
	int num2 = 20 ;
	int temp ;
	printf("before swap\n");
    printf("first number is %d\n",num1);
    printf("second number is %d\n",num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("after swap \n");
    printf("first number is %d\n",num1);
    printf("second number is %d\n",num2);
    return 0;
}