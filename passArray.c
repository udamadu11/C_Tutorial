#include <stdio.h>
int ay(int arry[]);

void main(){

	int array[5] = {1,2,3,4,5};
	int result = ay(array);
	printf("Total is %d\n",result);

}

int ay(int arry[]){

	int i = 0;
	int res = 0;

	for(i = 0 ;i < 5 ; i++){
		res = arry[i] + res;
	}	
	return res ;
}
