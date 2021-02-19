#include <stdio.h>
#include "functions.h"

void combineArrays() {

	int arrOne[ max ], arrTwo[ max ], mergedArr[ max ];
	int arrOneLen, arrTwoLen;
	int ctrOne, ctrTwo, mergedCtr;

// initialize array one
	printf( "give a length for arrayOne:\n" );
	scanf( "%d", &arrOneLen );
	printf( "in sorted order, list %d values for arrayOne:\n", arrOneLen );
	for( ctrOne = 0; ctrOne < arrOneLen; ctrOne++ )
		scanf( "%d", &arrOne[ ctrOne ] );
  // endblock initialize array one

// initialize array two
	printf( "give a length for arrayTwo:\n" );
	scanf( "%d", &arrTwoLen );
	printf( "in sorted order, list %d values for arrayTwo:\n", arrTwoLen );
	for( ctrTwo = 0; ctrTwo < arrTwoLen; ctrTwo++ )
		scanf( "%d", &arrTwo[ ctrTwo ] );
  // endblock initialize array two

	ctrOne = ctrTwo = mergedCtr = 0;

// loop arrayOne and arrayTwo and insert into mergedArray
	while( (ctrOne < arrOneLen) && (ctrTwo < arrTwoLen) ) {
		if( arrOne[ ctrOne ] < arrTwo[ ctrTwo ] ) {
			mergedArr[ mergedCtr ] = arrOne[ ctrOne ];
			ctrOne++;
			mergedCtr++;
		}else {
			if( arrTwo[ ctrTwo ] < arrOne[ ctrOne ] ) {
				mergedArr[ mergedCtr ] = arrTwo[ ctrTwo ];
				mergedCtr++;
				ctrTwo++;
			}else {
				mergedArr[ mergedCtr ] = arrOne[ ctrOne ];
				mergedCtr++;
				ctrOne++;
				mergedArr[ mergedCtr ] = arrTwo[ ctrTwo ];
				mergedCtr++;
				ctrTwo++;
			}
		}
	}
	while( ctrOne < arrOneLen ) {
		mergedArr[ mergedCtr ] = arrOne[ ctrOne ];
		mergedCtr++;
		ctrOne++;
	}
	while( ctrTwo < arrTwoLen ) {
		mergedArr[ mergedCtr ] = arrTwo[ ctrTwo ];
		mergedCtr++;
		ctrTwo++;
	}
// endblock loop arrayOne and arrayTwo and insert into mergedArray

	printf( "merged array contents:\n" );
	for( ctrOne = 0; ctrOne < mergedCtr; ctrOne++ )
		printf( "%d\n", mergedArr[ ctrOne ] );
}
