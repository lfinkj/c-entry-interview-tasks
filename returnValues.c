#include <stdio.h>

#define bufSize 100

int * getLowAndHigh( int buff[], int intVal );

void returnValues() {
	int buffer[ bufSize ];
	int inputTotal, ctr, *ptr;

	printf( "How many values? " );
	scanf( "%d", &inputTotal );

	printf( "Enter %d values\n", inputTotal );
	for( ctr = 0; ctr < inputTotal; ctr++ )
		scanf( "%d", &buffer[ctr] );

	ptr = getLowAndHigh( buffer, inputTotal );
	printf( "Minimum value is %d\n", *ptr++ );
	printf( "Maximum value is %d\n", *ptr );
}

int * getLowAndHigh( int buffer[], int inputTotal ) {
	int ctr;
	static int minmax[2];

	minmax[0] = buffer[0];
	minmax[1] = buffer[0];

	for( ctr = 1; ctr < inputTotal; ctr++ ) {
		if( minmax[0] > buffer[ctr] )
			minmax[0] = buffer[ctr];
		if( minmax[1] < buffer[ctr] )
			minmax[1] = buffer[ctr];
	}

	return minmax;
}
