#include <stdio.h>

void main(){

	int i,j;
	i = 1;
	
	while(i <= 200){
		j = 1;
	
	
		while(j <= i){
			printf("%d  ",j);
			j = j + 1;
	}
		printf("\n");
		i = i + 1;
	}
}

