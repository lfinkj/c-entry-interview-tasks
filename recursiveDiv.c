#include <stdio.h>

int getGcd( int, int );

void recursiveDiv() {
	int nbr1,
		nbr2,
		res;

	printf( "input two numbers and find their gcd: " );
	scanf( "%d %d", &nbr1, &nbr2 );

	res = getGcd( nbr1, nbr2 );
	printf( "Greatest Common Divisor of %d and %d is %d", nbr1, nbr2, res );
}
int getGcd( int n1, int n2 ) {
	int result;

	result = n1 % n2;

	if ( result == 0 )
		return( n2 );
	else
		getGcd( n2, result );
}
