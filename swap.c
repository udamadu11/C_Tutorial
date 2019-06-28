#include <stdio.h>
int main(){
    int fnum,snum,temp;
    printf("Enter the First Number : ");
    scanf("%d",&fnum);
    printf("Enter the second Number : ");
    scanf("%d",&snum);

    temp = fnum;
    fnum = snum;
    snum =temp;

    printf("After Swap ,First Number is : %d\n",fnum);
    printf("After Swap ,Second Number is : %d\n",snum);
    return 0;
}