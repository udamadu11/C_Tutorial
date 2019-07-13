#include <stdio.h>

int main(){
	
	int number;
	printf("Enter Positive number : ");
	scanf("%d",&number);


	for(int i=1;i<=number;i++){
	
	if(number % i == 0){
		printf("Factor of %d is %d\n",number,i);
	}

	}

	return 0;
}
