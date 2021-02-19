#include <stdio.h>
#include <string.h>
#include "functions.h"

int checkCharMatch( char checkChar, char array[], int checkCtr ) {
	int ctr;
	for( ctr = 0; ctr < checkCtr; ctr++ )
		if( array[ctr] == checkChar ) return ( 1 ); // loop passed array and crosscheck chars
	return( 0 );
}
void firstRepeatCharInStr() {
	char charArr1[ eighty ];
	char charArr2[ eighty ];
	int charArr1Len, ctr1, ctr2;

	printf("\ninput your string: ");
	scanf("%s", charArr1);

	charArr1Len = strlen( charArr1 );
	charArr2[ 0 ] = charArr1[ 0 ];
	ctr2 = 1;

	for ( ctr1 = 1; ctr1 < charArr1Len; ctr1++ ) {
		if ( checkCharMatch( charArr1[ctr1], charArr2, ctr2 ) ) { // loop string and run cross check function on each character
			printf( "The first repetitive character in %s is %c\n", charArr1, charArr1[ ctr1 ] );
			break; // just print matching char and exit program after first match
		}
		else {
			charArr2[ ctr2 ] = charArr1[ ctr1 ]; // accumulate chars in array 2 until a repeat char is found
			ctr2++;
		}
	}
	if ( ctr1 == charArr1Len )
		printf( "There is no repetitive character in the string %s\n", charArr1 );
}
