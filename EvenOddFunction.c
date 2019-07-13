#include <stdio.h>

void even(int);

int main(){

	int number;
	printf("Enter the number : ");
	scanf("%d",&number);
	
	even(number);


return 0;
}

void even(int num){

	if(num % 2 == 0){
		printf("Its Even Number\n");
	}else{
		printf("Its Odd Number\n");
	}

}
