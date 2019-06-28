#include<stdio.h>
int main(){
    float fnum,snum;
    printf("Enter first Floating Number :");
    scanf("%f",&fnum);
    printf("Enter the Second Floating Number :");
    scanf("%f",&snum);
    float multifly = fnum * snum;
    printf("Sum is %f + %f = %f ",fnum,snum,multifly);
}