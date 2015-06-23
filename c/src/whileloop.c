#include <stdio.h>

void main() {
	
	//while loop example
	int a = 0;
	while(a<16) {
		printf("a = %d\n",a);
		a = a+2;	
	}
	
	//same thing with different operator style
	printf("\n\nReseting a\n\n");
	a = 0;
	while(a<16) {
		printf("a = %d\n",a);
		a+= 1;	
	}
	
	/*post increment operator example
	**the value of a is first used and then increased*/
	printf("\n\nReseting a\n\n");
	a = 0;
	while(a<16) {
		printf("a = %d\n",a);
		a++;	
	}
	
	/*pre increment operator example
	**operators can be used anywhere the variable appears*/
	printf("\n\nReseting a\n\n");
	a = 0;
	while(a<16) {
		printf("a = %d\n",a);
		++a;	
	}
	
	/*the post increment and pre increment can be used anywhere the variable appears*/
	printf("\n\nReseting a\n\n");
	a = 0;
	while(a<16) {
		printf("a = %d\n",a++);
			
	}
	printf("\n\nReseting a\n\n");
	a = 0;
	while(a<16) {
		printf("a = %d\n",++a);
			
	}

}