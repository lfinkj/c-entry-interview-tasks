#include <stdio.h>
#include <math.h>

#define arrSize 10

int stkTop = -1;
int dataStk[ arrSize ];

void stackPsh();
int stackPop();
char displayHex( int hexval );
int convDec( int binval );
void convHex( int binval, int decval );

void hexBinConvert() {
	int input,
		res;
	printf( "\n" );
	printf( "type in a binary number, in the form of a string of 1s and 0s: " );
	scanf( "%d", &input );

	res = convDec( input );

	printf( "%d equals %d in decimal\n", input, res );

	convHex( input, res );

	printf( "\n" );
}
int convDec( int bny ) {
	int baseTen,
		leftover,
		power,
		rtn;
	while( bny > 0 ) {
		leftover = bny % 10;
		stackPsh( leftover );
		bny = bny / 10;
	}
	baseTen = 0;
	power = stkTop;
	while( stkTop >= 0 ) {
		rtn = stackPop();
		baseTen = baseTen + rtn * pow( 2, power );
		power--;
	}
	return ( baseTen );
}
void convHex( int bny, int dcml ) {
	int leftover,
		rtn;
	while ( dcml > 0 ) {
		leftover = dcml % 16;
		stackPsh( leftover );
		dcml = dcml / 16;
	}
	printf( "%d in hex form: ", bny );
	while ( stkTop >= 0 ) {
		rtn = stackPop();
		if ( rtn < 10 )
			printf( "%d", rtn );
		else
			printf( "%c", displayHex( rtn ) );
	}
}
void stackPsh( int stackVal ) {
	stkTop++;
	dataStk[ stkTop ] = stackVal;
}
int stackPop() {
	int val;
	if( stkTop == -1 )
		return( stkTop );
	val = dataStk[ stkTop ];
	stkTop--;
	return( val );
}
char displayHex( int conVal) {
	switch( conVal ) {
	case 10:
		return ('A');
		break;
	case 11:
		return ('B');
		break;
	case 12:
		return ('C');
		break;
	case 13:
		return ('D');
		break;
	case 14:
		return ('E');
		break;
	case 15:
		return ('F');
		break;
	}
}
