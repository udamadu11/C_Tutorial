#include <stdio.h>

double cube(double num);

int main(){

	int number;
	printf("Enter the value : ");
	scanf("%d",&number);
	
	double cub = cube(number);
	printf("Cube is : %.2f\n",cub);

		return 0;
	}

double cube(double num){
	
	return (num * num * num);

}
