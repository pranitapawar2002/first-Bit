#include<stdio.h>
void xyz();
int start=1;
int end = 5;
int sum = 0;
void main()
{
	xyz();
}

void xyz(){
		for(int i=start;i<=end;i++)
	{
		sum = sum+i;
	
	}
		printf("%d",sum);

}