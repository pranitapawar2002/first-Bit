#include<stdio.h>
void main()
{
	int num = 19;
	int flag = 0;
	for(int i=2; i<num;i++)
	{
		if(num%i==0)
		{
		
		flag = 1;
	   // printf("%d",i);
      	}
      	
	
	}
	
		if(flag == 0)
	{
		printf("%d number is prime" ,num);
	}
	else{
		printf("%d number is not  prime" ,num);
	}
	

}