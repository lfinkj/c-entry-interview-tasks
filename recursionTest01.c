#include <stdio.h>

int recurseLoop( int );

int ctr = 0;

int recursionTest() {
	recurseLoop( 1 );
	return 0;
}
int recurseLoop( int option ) {
	if( option == 0 ) {
		return( 0 );
	}else {
		ctr++;

		printf( "\nlooped %d times so far, run loop again? 1 or 0:\n", ctr );
		scanf( "%d", &option );

		recurseLoop( option );
	}
}
