#include <stdio.h>
#include "functions.h"

int ifDuplicate( int arr[], int len, int val )
{
	int ctr;
	for( ctr = 0; ctr < len; ctr++ )
		if( arr[ ctr ] == val )
			return( 1 );

	return( 0 );
}
void removeDuplicates()
{
	int arrayWithDuplicates[ max ];
	int filteredArray[ max ];
	int dupArrayLen, arrCtr, arrIndex;
	arrIndex = 0;

// initialize array with duplicates
	printf( "input array with duplicates length:" );
	scanf( "%d", &dupArrayLen );
	printf( "\ntype %d values for array with duplicates:\n", dupArrayLen );
	for( arrCtr = 0; arrCtr < dupArrayLen; arrCtr++ )
		scanf( "%d", &arrayWithDuplicates[ arrCtr ] );
  // endblock initialize array with duplicates

	filteredArray[ 0 ] = arrayWithDuplicates[ 0 ];
	arrIndex = 1;

// loop, call ifDuplicates function, insert values in filtered array
	for( arrCtr = 1; arrCtr < dupArrayLen; arrCtr++ )
	{
		if( !ifDuplicate( filteredArray, arrIndex, arrayWithDuplicates[ arrCtr ] ) )
		{
			filteredArray[ arrIndex ] = arrayWithDuplicates[ arrCtr ];
			arrIndex++;
		}
	}
  // endblock loop, call ifDuplicates function, insert values in filtered array

	printf( "\nfiltered array contents:\n" );
	for( arrCtr = 0; arrCtr < arrIndex; arrCtr++ )
		printf( "%d\n", filteredArray[ arrCtr ] );
}
