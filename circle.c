#include <stdio.h>
#include <math.h>

double getDiameter(double radius);
double getCir(double radius);
double getArea(double radius);
int main(){

	double radius;
	printf("Enter Radias : ");
	scanf("%lf",&radius);

	double diameter = getDiameter(radius);
	double circumferece = getCir(radius);
	double area = getArea(radius);

	printf("Diameter is %.2lf\n",diameter);
	printf("circumferece is %.2lf\n",circumferece);
	printf("Area is %.2lf\n",area);
 
	return 0;
}

double getDiameter(double radius){
	return 2 * radius;
}

double getCir(double radius){
	return (2 * M_PI *radius);
}

double getArea(double radius){
	return (M_PI * radius * radius);
}
