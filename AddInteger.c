#include <stdio.h>
int main(){
	int fnum, snum;
	printf("Enter the first Number :");
	scanf("%d",&fnum);
	printf("Enter the second Number :");
	scanf("%d",&snum);
	int sum = fnum + snum;
	printf("Sum is %d + %d = %d\n",fnum,snum,sum);
	return 0;
}
