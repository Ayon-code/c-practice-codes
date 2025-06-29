#include <stdio.h>

int main () {
	printf("Enter the number of row :");
	int a,b=0;
	scanf("%d",&a);
	for ( int i =a ; i ; i--){
		for ( int j =1; j<i; j++){
			printf(" ");
			 b=j; 
		}
		if ( i== 1){ b=0;}
		for( int k = 1; k<=a-b ; k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
