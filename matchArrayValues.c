#include <stdio.h>
#include "functions.h"

int compareValues( int arr[], int len, int val )
{
	int ctr;
	if( len == 0 )
	{
		return 0;
	}
	else
	{
		for( ctr= 0; ctr <= len; ctr++ )
		{
			if( arr[ ctr ] == val )
			{
				return( 1 );
			}
		}
	}
	return 0;
}

void matchArrayValues()
{
	int arrayOne[ max ];
	int arrayTwo[ max ];
	int matchesArray[ max ];
	int arrOneLen, arrTwoLen, ctrOne, ctrTwo, commonIndex;
	commonIndex = 0;

// initalize array one	
	printf( "input arrayOne's length:" );
	scanf( "%d", &arrOneLen );
	printf( "input %d values for array one:\n", arrOneLen );
	for( ctrOne = 0; ctrOne < arrOneLen; ctrOne++ )
	{
		scanf( "%d", &arrayOne[ ctrOne ] );
	}
  // endblock initialize array one

// initialize array two
	printf( "input arrayTwo's length:" );
	scanf( "%d", &arrTwoLen );
	printf( "input %d values for array two:\n", arrTwoLen );
	for( ctrTwo = 0; ctrTwo < arrTwoLen; ctrTwo++ )
	{
		scanf( "%d", &arrayTwo[ ctrTwo ] );
	}
  // endblock initialize array two

// loop arrays and compare them, insert matches into matchesArray
	commonIndex = 0;
	for( ctrOne = 0; ctrOne < arrOneLen; ctrOne++ )
	{
		for( ctrTwo = 0; ctrTwo < arrTwoLen; ctrTwo++ )
		{
			if( arrayOne[ ctrOne ] == arrayTwo[ ctrTwo ] )
			{
				if( !compareValues( matchesArray, commonIndex, arrayOne[ ctrOne ] ) )
				{
					matchesArray[ commonIndex ] = arrayTwo[ ctrTwo ];
					commonIndex++;
				}
			}
		}
	}
  // endblock loop arrays and compare them

	if( commonIndex > 0 )
	{
		printf( "printed matches:\n" );
		for( ctrOne = 0; ctrOne < commonIndex; ctrOne++ )
		{
			printf( "%d\n", matchesArray[ ctrOne ] );
		}
	}else
	{
		printf( "the two arrays are unique and have no common values\n" );
	}

}
