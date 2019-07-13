#include <stdio.h>

int main(){
	int var = 3;
	int *ptr;
	int **pttr;

	ptr = &var;
	pttr = &ptr;

	printf("Value of var is : %d\n",var);
	printf("Value of ptr is : %d\n",*ptr);
	printf("Value of pttr is : %d\n",**pttr);

return 0;
}
