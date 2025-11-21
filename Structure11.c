#include<stdio.h>
#include<string.h>
struct stud{
	int rollno;
	char name[20];
	double marks;
};
struct stud storeStud();
void main(){
struct stud s1,s2;
 s1=storeStud();
 s2=storeStud();
display(s1);
display(s2);
}

struct stud storeStud()
{
	struct stud s;
	printf("enter rollno:");
	scanf("%d",&s.rollno);
	printf("enter name:");
	scanf("%s",&s.name);
	printf("enter marks:");
	scanf("%ld",&s.marks);
	return s;
}

void display(struct stud x)
{
	printf("rollno = %d  ",x.rollno);
	printf("name = %s  ",x.name);
	printf("marks = %ld  ",x.marks);
	
	printf("\n");
}