#include <stdio.h>

void recursion( int );
int count = 0;
int times;

void runRecursion() {
	
	printf( "enter a number:\n" );
	scanf( "%d", &times );
	printf( "\n" );

	recursion( times );
}
void recursion( int i ) {

	printf( "%d ", i );
	i--;
	count++;

	if( i >= 0 ) {
		recursion( i );
	}else {
		printf( "\nrecursion done at %d runs", count );
	}
}
