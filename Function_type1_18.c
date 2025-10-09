#include<stdio.h>
void xyz();
int marks;
void main()
{
	printf("enter marks:");
  scanf("%d",&marks);
	xyz();
	
}

void xyz(){
	if(marks>75){
		printf(" distinction");
	}
	else{
		if(marks>65){
			printf("first class");
		}
		else{
			if(marks>55)
			{
				printf(" second class");
			}
			else{
				if(marks>40)
				{
					printf(" pass class");
				}
				else
				{
					printf("fail");
				}
			}
		
		}
	
	
	}

}