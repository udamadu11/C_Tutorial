#include <stdio.h>
#include <string.h>

int add (int x,int y){
	return x + y;
}

void main(){
int x = 10;
int y = 20;

int result = add (x, y);
printf("Addition is %d\n",result);

}
