#include<stdio.h>
struct SalesManager{
	int id;
	char name[30];
	double salary;
	int intensive;
	int target;
};
void main()
{
	struct SalesManager m1;
	printf("enter id of SalesManager:");
	scanf("%d",&m1.id);
	printf("enter name of SalesManager:");
	scanf("%s",&m1.name);
	printf("enter salary of SalesManager:");
	scanf("%ld",&m1.salary);
	printf("enter intensive of SalesManager:");
	scanf("%d",&m1.intensive);
	printf("enter target of SalesManager:");
	scanf("%d",&m1.target);
	
	
	printf("id= %d\n",m1.id);
	printf("name= %s\n",m1.name);
	printf("salary= %ld\n",m1.salary);
	printf("intensive= %d\n",m1.intensive);
	printf("target= %d\n",m1.target);
}