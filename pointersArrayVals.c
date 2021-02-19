#include <stdio.h>

#define buffMax 100

void pointersArraysVals() {
	int nbrBuffer[buffMax],
		ctr,
		arraySize,
		*arrPointer,
		*highVal;

	printf( "input the size for the number array: " );
	scanf( "%d", &arraySize );

	printf( "there are %d numbers in the array, input them now: \n", arraySize );
	for( ctr = 0; ctr < arraySize; ctr++ )
		scanf( "%d", &nbrBuffer[ctr] );

	highVal = nbrBuffer;
	arrPointer = nbrBuffer;

	for( ctr = 0; ctr < arraySize; ctr++ ) {
		if ( *highVal < *arrPointer )
			highVal = arrPointer;
		arrPointer++;
	}
	printf( "the highest value you input is: %d\n", *highVal );
}
