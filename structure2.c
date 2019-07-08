#include <stdio.h>
#include <string.h>

typedef struct{
	char name[20];
	float price;
}product;

void main(){
	product apple,orange;
	
	strcpy(apple.name,"Red Apple");
	apple.price = 20;

	printf("Product name is %s\n",apple.name);
	printf("Product price is %.2f\n",apple.price);
}
