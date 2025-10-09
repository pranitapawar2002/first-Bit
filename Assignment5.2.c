#include<stdio.h>
int main()
{
	int num1 = 1;
	int num2 = 100;

	int i,j;
	for( i=num1;i<=num2;i++)
	{
		for(j=2;j<i;j++)
		{
		
		if(i%j==0)
		  break;
		
        }

      	
      		if(i == j)
	       {
		      printf("%d\n" ,i);
		    
	        }
	        
	  // flag = 0;     
    }
    return 0;
}