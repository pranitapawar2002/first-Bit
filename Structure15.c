#include<stdio.h>
struct SalesManager{
	int id;
	char name[30];
	double salary;
	int intensive;
	int target;
};
struct SalesManager storeSm();

 void main()
 {
 	struct SalesManager s1,s2;
	s1 = storeSm();
	display(s1);
	s2 = storeSm();
	display(s2);	
 }
 
 struct SalesManager storeSm()
{
struct SalesManager s;
	printf("enter id:");
    scanf("%d",&s.id);
    printf("enter name:");
	scanf("%s",&s.name);
	printf("enter salary:");
	scanf("%ld",&s.salary);
	printf("enter intensive:");
	scanf("%d",&s.intensive);
    printf("enter target:");
	scanf("%d",&s.target);

	return s;	
}

void display(struct SalesManager x)
{
	printf("id = %d\n",x.id);
	printf("name = %s\n",x.name);
	printf("salary = %ld\n",x.salary);
	printf("allowance = %d\n",x.intensive);
	printf("target = %d\n",x.target);

	
	printf("\n");
}