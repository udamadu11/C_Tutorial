#include <stdio.h>
int main(){
    float r;
    float pi = 3.14;
    float area;

    printf("Enter the R Value of Disk : ");
    scanf("%f",&r);

    area = pi*r*r;
    printf("Area is : %f\n",area);
}