#include <stdio.h>
#include <string.h>

int x =10;
int y =20;

int add(){
return x+y;
}

void main(){
	int result;
	result = add();
	printf("Addition is %d",result);
}
