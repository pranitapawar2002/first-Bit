#include<stdio.h>
int abc();
char c = 'A';
int main()
{
    int a = abc();
    if(a==0)
    {
     printf(" it is vowel");	
	}
	else{
	  printf(" it is not vowel");
	}

}

int abc()
{
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
		    return 0;
	}
	else{
	    return 1;
	}
}