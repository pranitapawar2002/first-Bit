#include<stdio.h>
int xyz();
char ch = 'a';
int main()
{
	int a = xyz();
	if(a==0)
	    printf("character is in uppercase");
    else
        printf("character is in lowercase");
        
	

}

int xyz()
{
		if(ch>='A' && ch<='Z')
	    	return 0;
	   else
		    return 1;
	
}