#include <stdio.h>
#include "functions.h"

void multiplyMatrices()
{

	int matrixOne[ 2 ][ 3 ];
	int matrixTwo[ 3 ][ 4 ];
	int resultsMatrix[ 2 ][ 4 ];
	int col, row, commonIndices;

// populate the matrices with values
	printf( "for the first matrix type values for a 2 by 3 format:\n" );
	for( row = 0; row < 2; row++ )
	{
		for( col = 0; col < 3; col++ )
		{
			scanf( "%d", &matrixOne[ row ][ col ]);
		}
	}

	printf( "for the second  matrix type values for a 3 by 4 format:\n" );
	for( int row = 0; row < 3; row++ )
	{
		for( col = 0; col < 4; col++ )
		{
			scanf( "%d", &matrixTwo[ row ][ col ]);
		}
	}
  // endblock populate the matrices

// compute matrix one and two and insert results in resultsMatrix
	for( row = 0; row < 2; row++ )
	{
		for( col = 0; col < 4; col++ )
		{
			resultsMatrix[ row ][ col ] = 0;
			for( commonIndices = 0; commonIndices < 3; commonIndices++ )
			{
				resultsMatrix[ row ][ col ] =
					resultsMatrix[ row ][ col ] + matrixOne[ row ][ commonIndices ] * matrixTwo[ commonIndices ][ col ];
			}
		}
	}
  // endblock multiply matrices

// print all matrices
	printf( "\nprinted first matrix:\n" );
	for( row = 0; row < 2; row++ )
	{
		for( col =0; col < 3; col++ )
		{
			printf( "%d\t", matrixOne[ row ][ col ] );
		}
		printf( "\n" );
	}
	printf( "\nprinted second matrix:\n" );
	for( row = 0; row < 3; row++ )
	{
		for( col = 0; col < 4; col++ )
		{
			printf( "%d\t", matrixTwo[ row ][ col] );
		}
		printf( "\n" );
	}
	printf( "\nprinted results matrix:\n" );
	for( row = 0; row < 2; row++ )
	{
		for( col = 0; col < 4; col++ )
		{
			printf( "%d\t", resultsMatrix[ row ][ col ] );
		}
		printf( "\n" );
	}
  // endblock print all matrices

}
