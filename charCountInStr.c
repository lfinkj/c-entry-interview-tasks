#include <stdio.h>
#include <string.h>
#include "functions.h"

int countRepeatChar( char checkChar, char array[], int k, int m[] ) {
	int ctr;
	for ( ctr = 0; ctr <= k; ctr++ ) {
		if ( array[ctr] == checkChar ) {
			m[ ctr ]++;
			return (1);
		}
	}
	if ( ctr > k ) return ( 0 );
}
void charCountInStr() {
	char charArr[ eighty ];
	char charArr2[ eighty ];
	int charArrLen, ctr1, ctr2;
	int cntArr[ eighty ];

	printf( "\ntype in your string:\n" );
	scanf( "%s", charArr );

	charArrLen = strlen( charArr );
	charArr2[ 0 ] = charArr[ 0 ];
	cntArr[ 0 ] = 1;
	ctr2 = 0;

	for ( ctr1 = 1; ctr1 < charArrLen; ctr1++ ) {
		if ( !countRepeatChar( charArr[ctr1], charArr2, ctr2, cntArr ) ) {
			ctr2++;
			charArr2[ ctr2 ] = charArr[ ctr1 ];
			cntArr[ ctr2 ] = 1;
		}
	}

	printf( "string count for: %s:\n", charArr );
	for ( ctr1 = 0; ctr1 <= ctr2; ctr1++ )
		printf( "%c\t%d\n", charArr2[ ctr1 ], cntArr[ ctr1 ] );
	printf( "\n" );
}
