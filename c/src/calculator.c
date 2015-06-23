#include <stdio.h>

int add(int a, int b){
	int c;
	c = a + b;
	return c;
}
void main(){
	int sum;
	
	sum = add(10, 2);
	
	printf("sum = %d", sum);
	
	
	
}