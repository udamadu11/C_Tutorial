#include<stdio.h>
int main(){
    float f,c;
    printf("Enter the Temprature : ");
    scanf("%f",&c);

    f = c *1.8 + 32.0;
    printf("Fahrenheit : %f\n",f);
    return 0;

}