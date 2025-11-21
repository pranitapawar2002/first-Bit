#include<stdio.h>
#include<string.h>
struct emp{
	int id ;
	char name[20];
	double sal;
};
struct emp storeEmp();
void main()
{
	struct emp e1;
	e1 = storeEmp();
	display(e1);
}

struct emp storeEmp()
{
struct emp s;
     printf("enter id:");
	scanf("%d",&s.id);
	printf("enter name:");
	scanf("%s",&s.name);
	printf("enter salary:");
	scanf("%ld",&s.sal);
	return s;	
}

void display(struct emp x)
{
	printf("id = %d  ",x.id);
	printf("name = %s  ",x.name);
	printf("salary = %ld  ",x.sal);
	
	printf("\n");
}