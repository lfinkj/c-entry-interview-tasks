#include <stdio.h>
#include "functions.h"

void checkMatrixDensity()
{
	static int matrixArr[ max ][ max ];
	int row, col;
	int rowCtr, colCtr;
	int ctr = 0;

// initialize the order of the matrix
	printf( "give an order for the matrix in value X value format: " );
	scanf( "%d %d", &row, &col );
  // endblock initialize the order of the matrix

// initialize the values of the matrix
	printf( "input the values of the matrix, according to the format you just entered:\n" );
	for( rowCtr = 0; rowCtr < row; rowCtr++ )
	{
		for( colCtr = 0; colCtr < col; colCtr++ )
		{
			scanf( "%d", &matrixArr[ rowCtr ][ colCtr ] );
			if( matrixArr[ rowCtr ][ colCtr ] == 0 )
			ctr++;
		}
	}
  // endblock initialize the values of the matrix

// calculate and print whether matrix is dense or not
	if( ctr > (( row * col ) / 2) )
		printf( "your matrix is not dense\n" );
	else
		printf( "your matrix is dense\n" );
	printf( "your matrix has %d zeros\n", ctr );
  // calculate and print whether matrix is dense or not
}
