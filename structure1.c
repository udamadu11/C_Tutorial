#include <stdio.h>
#include <string.h>
struct product {
	char name[20];
	float price;

}apple,orange;

void main(){
	strcpy(apple.name,"Red Apple");
	apple.price = 20;
	
	printf("Product name is %s\n",apple.name);
	printf("Product price is %f\n",apple.price);
}
