#include<stdio.h>
void main()
{
	printf("Enter 1 to check number is even or odd\n");
	printf("Enter 2 to check number is prime or not \n");
	printf("Enter 3 to check number is palindrome or not\n");
	printf("Enter 4 to check number is positive or negative\n");
	printf("Enter 5 to reverse the number\n");
	printf("Enter 6 to sum of digits\n");
	
      int num = 121;
      int n= 6;
    
 //1  
 
 if(n==1)  {

    if(num%2==0)
    {
      printf("%d is even \n",num);	
	}
	else{
		printf("%d is odd \n",num);
	}
}


//2

  else if(n==2){
	int flag=0;
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			flag=1;
		}
	}
	if(flag == 0)
	{
		printf("%d number is prime\n" ,num);
	}
	else{
		printf("%d number is not  prime\n" ,num);
	}
}
//3 
else if(n==3){


     int rem =0;
     int num1=0;
     int temp = num;
     //printf("%d\n",temp);
    while(temp!=0)
    {
    	rem = temp%10;
    	num1=num1*10+rem;
    	temp = temp/10;
	}
	
	 if(num1==num)
    {
      printf("%d is palindrome\n",num);	
	}
	else{
		printf("%d is not palindrome\n",num);
	}
}


//4
else if(n==4)
{
   if(num>=0)
   {
   	printf("%d is positive",num);
   }
   else{
   	printf("%d is negative",num);
   }
}

//5
else if(n==5)
{
	 int rem =0;
     int num1=0;
     int temp = num;
     //printf("%d\n",temp);
    while(temp!=0)
    {
    	rem = temp%10;
    	num1=num1*10+rem;
    	temp = temp/10;
	}
	
	printf("%d reverse number is %d",num,num1);
}
 
   
//6
else if(n==6)
{
      int rem =0;
     int num1=0;
     int temp = num;
     //printf("%d\n",temp);
    while(temp!=0)
    {
    	rem = temp%10;
    	num1=num1+rem;
    	temp = temp/10;
	} 
	
	printf("sum of digits is %d",num1);	
	
}
   
   
   
}