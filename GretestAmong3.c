#include <stdio.h>

int main(){
	
	int num1, num2, num3;

	printf("Enter Number1 : ");
	scanf("%d",&num1);

	printf("Enter Number2 : ");
	scanf("%d",&num2);

	printf("Enter Number3 : ");
	scanf("%d",&num3);

	if((num1 > num2) && (num1 > num3)) {
		printf("Number 1 is Greatest One\n");
	}

	if((num2 > num1) && (num2 > num3)) {
		printf("Number 2 is Greatest One\n");
	}

	if((num3 > num1) && (num3 > num2)) {
		printf("Number 3 is Greatest One\n");
	}
	
return 0;
}
