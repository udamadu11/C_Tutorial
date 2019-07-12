#include <stdio.h>

int maximum(int num1 ,int num2);
int minimum(int num1 ,int num2);

int main(){
	
	int num1,num2;
	printf("Enter First Number : ");
	scanf("%d",&num1);

	printf("Enter Second Number : ");
	scanf("%d",&num2);

	int max = maximum(num1,num2);
	int min = minimum(num1,num2);

	printf("Maximum is %d\n",max);
	printf("Minimum is %d\n",min);
	
	return 0;

}

int maximum(int num1 ,int num2){

	if(num1 > num2){
		return num1;
	}else{
		return num2;
	}
	
}

int minimum(int num1 ,int num2){

	if(num1 > num2){
		return num2;
	}else{
		return num1;
	}
	
}
