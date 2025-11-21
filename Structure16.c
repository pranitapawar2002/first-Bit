#include<stdio.h>
struct dd{
	int day ;
	int month;
	int year;
};
 struct dd storeDate();
void main()
{
	struct dd d1,d2;
	d1 = storeDate();
	display(d1);
	d2 = storeDate();
	display(d2);
}

 struct dd storeDate()
{
	struct dd d ;
	printf("enter date:");
	scanf("%d ",&d.day);
	printf("enter month:");
	scanf("%d " ,&d.month);
	printf("enter year:");
	scanf(" %d " ,&d.year);
	return d;
}

void display(struct dd s)
{
	printf("date is = %d/%d/%d",s.day,s.month,s.year);
 
 printf("\n");
	
}