#include<stdio.h>
int abc();
int a = 1;
int main()
{
      abc();
	
}
int abc(){
	while(a<=10)
	{
		printf("%d\n",a);
		a++;
	}

}