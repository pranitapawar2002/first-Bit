#include<stdio.h>
struct Hr{
    int id;
	char name[30];
	double salary;
	int commission;	
};
struct Hr storeHr();
void main()
{
  struct Hr H1,H2;
	H1 = storeHr();
	display(H1);	
}

struct Hr storeHr()
{
struct Hr H;
	printf("enter id:");
    scanf("%d",&H.id);
    printf("enter name:");
	scanf("%s",&H.name);
	printf("enter salary:");
	scanf("%ld",&H.salary);
	printf("enter commission:");
	scanf("%d",&H.commission);
	return H;	
}

void display(struct Hr x)
{
	printf("id = %d\n",x.id);
	printf("name = %s\n",x.name);
	printf("salary = %d\n",x.salary);
	printf("allowance = %d\n",x.commission);

	
	printf("\n");
}