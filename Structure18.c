#include<stdio.h>
struct Distance{
	double cm;
	double feet;
	double inch;
};
struct Distance storeDistance();
void main()
{
	struct Distance d1;
	d1 = storeDistance();
	display(d1);
}

struct Distance storeDistance()
{
	struct Distance c;
	printf("enter distance in centimrter:");
	scanf("%ld",&c.cm);
	
	return c;
}

void display(struct Distance a)
{
  double feet = a.cm/30;
  double inch = a.cm/0.394;
  printf("feet = %dl\n",feet);
  printf("inch = %dl",inch);	
}
