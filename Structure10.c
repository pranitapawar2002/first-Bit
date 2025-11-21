#include<stdio.h>
struct product{
	int id;
	char name[50];
	int quantity;
	int price;
	
};
void main()
{
  struct product p;
	printf("enter id:");
	scanf("%d",&p.id);
	printf("enter name:");
	scanf("%s",&p.name);
	printf("enter quantity:");
	scanf("%d",&p.quantity);
	printf("enter price:");
	scanf("%d",&p.price);
	
	printf("id = %d\n",p.id);	
	printf("name = %s\n",p.name);	
	printf("quantity = %d\n",p.quantity);	
	printf("price = %d\n",p.price);	
}