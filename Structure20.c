#include<stdio.h>
struct product{
	int id;
	char name[50];
	int quantity;
	int price;
	
};

struct product storeProduct();
void main()
{
	struct product p1,p2;
	p1 = storeProduct();
	display(p1);
	p2= storeProduct();
	//dispaly(p2);
}

struct product storeProduct()
{
	struct product p;
  printf("enter id");
  scanf("%d",&p.id);
  printf("enter name");
  scanf("%s",&p.name);
  printf("enter quantity");
  scanf("%d",&p.quantity);
  printf("enter price");
  scanf("%d",&p.price);
  return p;	
}

void display(struct product a)
{
	printf("id= %d\n",a.id);
   printf("name = %s\n",a.name);
	printf("quantity = %d\n",a.quantity);
	printf("price = %d\n",a.price);
}