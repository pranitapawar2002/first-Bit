#include<stdio.h>
#include<string.h>
struct emp{
	int id;
	char name[20];
	double salary;
};
void main()
{
   struct emp e1;
   printf("enter id = ");
   scanf("%d ",&e1.id);
   printf("enter name = ");
   scanf("%s",&e1.name);
   printf("enter salary = ");
   scanf("%d",&e1.salary);
   
   printf("id= %d ",e1.id); 	
   printf("name= %s ",e1.name);
   printf("salary= %d ",e1.salary);
}