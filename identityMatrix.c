#include <stdio.h>
#include "functions.h"

void identityMatrix()
{
	static int matrixArr[ max ][ max ];
	int rowCtr, colCtr;
	int row, col;
	int boo1;

// initialize and check matrix
	printf( "for a square matrix array, give the length of the side:" );
	scanf( "%d %d", &row, &col );

	if( row != col )
	{
		printf( "\nyou must enter a square matrix array with equal rows and columns, please start over\n" );
	}else
	{

		printf( "input the element values:\n" );
		for( rowCtr = 0; rowCtr < row; rowCtr++ )
		{
			for( colCtr = 0; colCtr < col; colCtr++ )
			{
				scanf( "%d", &matrixArr[ rowCtr ][ colCtr ] );
			}
		}
  // endblock initialize and check matrix

		printf( "matrix array contents:\n" );
		for( rowCtr = 0; rowCtr < row; rowCtr++ )
		{
			for( colCtr = 0; colCtr < col; colCtr++ )
			{
				printf( "%d\t", matrixArr[row][col] );
			}
			printf( "\n" );
		}

		boo1 = 1;

// loop matrix array and verifiy its an identity matrix
		for( rowCtr = 0; rowCtr < row; rowCtr++ )
		{
			for( colCtr = 0; colCtr < col; colCtr++ )
			{
				if( rowCtr == colCtr )
				{
					if( matrixArr[rowCtr][colCtr] != 1 )
					{
						boo1 = 0;
						break;
					}
				}else
				{
					if( matrixArr[rowCtr][colCtr] != 0 )
					{
						boo1 = 0;
						break;
					}
				}
			}
		}
// endblock loop matrix array and verifiy its an identity matrix

		if( boo1 )
			printf( "you have yourself an identity matrix\n" );
		else
			printf( "your matrix is not an identity matrix\n" );
	}
}
