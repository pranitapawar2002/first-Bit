#include<stdio.h>
#include<string.h>
struct emp{
	int id;
	char name[10];
	int salary;
	int allowance;
};
struct emp storeEmp();
void main()
{
	struct emp A1,A2;
	A1 = storeEmp();
	display(A1);
	A2=storeEmp();
	display(A2);
}

struct emp storeEmp()
{
struct emp A1;
	printf("enter id:");
    scanf("%d",&A1.id);
    printf("enter name:");
	scanf("%s",&A1.name);
	printf("enter salary:");
	scanf("%ld",&A1.salary);
	printf("enter allowance:");
	scanf("%d",&A1.allowance);
	return A1;	
}

void display(struct emp x)
{
	printf("id = %d\n",x.id);
	printf("name = %s\n",x.name);
	printf("salary = %d\n",x.salary);
	printf("allowance = %d\n",x.allowance);

	
	printf("\n");
}