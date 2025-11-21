#include<stdio.h>
struct Admin{
	int id;
	char name[10];
	int salary;
	int allowance;
};
void main()
{
	struct Admin A1,A2;
	printf("enter id:");
    scanf("%d",&A1.id);
    printf("enter name:");
	scanf("%s",&A1.name);
	printf("enter salary:");
	scanf("%ld",&A1.salary);
	printf("enter allowance:");
	scanf("%d",&A1.allowance);
	
	printf("id = %d\n",A1.id);
	printf("name = %s\n",A1.name);
	printf("salary = %d\n",A1.salary);
	printf("allowance = %d\n",A1.allowance);
	
	printf("eneter id:");
    scanf("%d",&A2.id);
    printf("eneter name:");
	scanf("%s",&A2.name);
	printf("eneter salary:");
	scanf("%ld",&A2.salary);
	printf("eneter allowance:");
	scanf("%d",&A2.allowance);
	
	printf("id = %d\n",A2.id);
	printf("name = %s\n",A2.name);
	printf("salary = %d\n",A2.salary);
	printf("allowance = %d\n",A2.allowance);
}