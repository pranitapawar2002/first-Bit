#include<stdio.h>
void main()
{
	int num = 12345;
	int last = num%10;
	printf("%d\n",last);
	int first = 0;
	for(int i=1;num>=10;)
	{
		num = num/10;
	}
	first = num;
	printf("%d\n",first);
	int sum = first+last;
	printf("the addition of first and last digit is %d",sum);
}