#include<stdio.h>
struct Hr{
	int id;
	char name[30];
	double salary;
	int commission;
};
void main()
{
	struct Hr h1;
	printf("enter id:");
	scanf("%d",&h1.id);
	printf("enter name:");
	scanf("%s",&h1.name);
	printf("enter salary:");
	scanf("%ld",&h1.salary);
	printf("enter commission:");
	scanf("%d",&h1.commission);
	
	printf("id= %d\n",h1.id);
	printf("name= %s\n",h1.name);
	printf("salary= %ld\n",h1.salary);
	printf("commission = %d\n",h1.commission);
	
}