#include <stdio.h>

#define X 10
void newfunction(int Z){
	int i,j;
	 for(i=1 ; i <= Z ;i = i + 1){
		 
		 for(j = 1 ; j <= i; j++){
			 printf("%d ", j);
		 }
		 printf("\n");
	 }
	
}
void printnumbers(){
	int i,j;
	 for(i=1 ; i <= X ;i = i + 1){
		 
		 for(j = 1 ; j <= i; j++){
			 printf("%d ", j);
		 }
		 printf("\n");
	 }
}
void main(){
	printnumbers();
	printf("\n\n\n\n\n");
	newfunction(5);
}