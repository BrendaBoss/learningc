#include <stdio.h>

#define X 10

void main(){
	int i,j;
	 for(i=1 ; i <= X ;i = i + 1){
		 
		 for(j = 1 ; j <= i; j++){
			 printf("%d ", j);
		 }
		 printf("\n");
	 }
}