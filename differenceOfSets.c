#include <stdio.h>
#include "functions.h"

int ifCommon( int resultArray[], int len, int val )
{
	int ctr;
	if( len == 0 )
		return 0;
	for( ctr = 0; ctr <= len; ctr++ )
		if( resultArray[ ctr ] == val )
			return( 1 );
	return( 0 );
}
void differenceOfSets()
{
		int arrayOne[max], arrayTwo[max], resultsArray[max];
		int arrOneLen, arrTwoLen;
		int ctrOne, ctrTwo, resultVal;

// initialize arrays
		printf("give arrayOne a size:");
		scanf("%d", &arrOneLen);
		printf("type %d values for arrayOne\n", arrOneLen);
		for (ctrOne = 0; ctrOne < arrOneLen; ctrOne++)
			scanf("%d", &arrayOne[ctrOne]);

		printf("\ngive a size for arrayTwo:");
		scanf("%d", &arrTwoLen);
		printf("type %d values for arrayTwo:\n", arrTwoLen);
		for (ctrOne = 0; ctrOne < arrTwoLen; ctrOne++)
			scanf("%d", &arrayTwo[ctrOne]);
  // endblock initialize arrays

// compare arrayOne and arrayTwo, find the difference of the two sets, build results array
		resultVal = 0;

		for (ctrOne = 0; ctrOne < arrOneLen; ctrOne++)
		{
			for (ctrTwo = 0; ctrTwo < arrTwoLen; ctrTwo++)
			{
				if (arrayOne[ctrOne] == arrayTwo[ctrTwo])
				{
					break;
				}
			}
			if (ctrTwo == arrTwoLen)
			{
				if ( !ifCommon( resultsArray, resultVal, arrayOne[ctrOne] ) )
				{
					resultsArray[resultVal] = arrayOne[ctrOne];
					resultVal++;
				}
			}
		}
  // endblock compare arrayOne and arrayTwo, find difference, build results array

		printf("\nresultsArray, difference of sets:\n");
		for (ctrOne = 0; ctrOne < resultVal; ctrOne++)
			printf("%d\n", resultsArray[ctrOne]);
}
