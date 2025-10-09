#include<stdio.h>
void abc();
int no ;
int i = 2,flag = 0;
void main()
{    
   printf("enter number:");
  scanf("%d",&no);
	abc();
}
 void abc(){
 	while(i<no/2)
	{
	if(no%i==0)
	   {
	
		flag=1;
       }
    break;
	i++;
	}
  if(flag==0)
  {
  	printf("prime");
  }
  else
  {
  	printf("not prime");
  }
 }