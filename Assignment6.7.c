#include<stdio.h>
void main()
{
	int n=4;
	int k=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			

		  printf(" %d ",k+1);
		  k++;
		}
		printf("\n");
	}
}