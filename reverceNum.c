#include <stdio.h>

int main(){

	int num,reverce=0,rev;
			
	printf("Enter number to reverce : ");
	scanf("%d",&num);

	while(num >= 1 ){

	rev = num % 10;
	reverce = reverce * 10 + rev ;

	num = num / 10 ;

	}

	printf("Reverce is : %d\n",reverce);

return 0;
}
