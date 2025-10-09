#include<stdio.h>
void abc();
char c = 'A';
void main()
{
    abc();

}

void abc()
{
		if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
		printf(" it is vowel");
	}
	else{
		printf(" it is not vowel");
	}
}