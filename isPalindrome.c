#include <stdio.h>
#include <string.h>
#include "functions.h"

void isPalindrome() {
	char properStr[ eighty ];
	char reverseStr[ eighty ];
	int strLen, strCtr, revCtr;

	printf( "\ninput your string: " );
	scanf( "%s", properStr );

	strLen = strlen( properStr );
	revCtr = 0;
	
	for( strCtr = strLen-1; strCtr >= 0; strCtr-- ) {
		reverseStr[ revCtr ] = properStr[ strCtr ];
		revCtr++;
	}
	reverseStr[ revCtr ] = '\0';

	if( strcmp( properStr, reverseStr ) == 0 ) {
		printf( "%s tests positive for palidrome\n\n", properStr );
	}else {
		printf( "%s tests negative for palidrome\n\n", properStr );
	}
}
