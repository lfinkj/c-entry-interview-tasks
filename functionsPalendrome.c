#include <stdio.h>
#include <math.h>

#define arrSize 10

int stkTop = -1;
int dataStk[ arrSize ];

void stackPsh();
int stackPop();
int isStrReversable( int );

void main() {
	int inInt;

	printf( "input a number to test: " );
	scanf( "%d", &inInt );

	if( isStrReversable( inInt ) )
		printf( "palidrome test for %d passed", inInt );
	else
		printf( "palidrome test for %d failed", inInt );
}
int isStrReversable( int inVal ) {
	int popResult,
		calcVal,
		leftover,
		tmpInt,
		ctr;

	tmpInt = inVal;

	while( inVal > 0 ) {
		leftover = inVal % 10;
		stackPsh( leftover );
		inVal = inVal / 10;
	}

	inVal = tmpInt;
	ctr = 0;
	calcVal = 0;

	while( stkTop >= 0 ) {
		popResult = stackPop();
		calcVal = calcVal + popResult * pow( 10, ctr );
		ctr++;
	}

	if ( inVal == calcVal )
		return( 1 );
	else
		return( 0 );
}
void stackPsh( int pushArg ) {
	stkTop++;
	dataStk[ stkTop ] = pushArg;
}
int stackPop() {
	int stackTopTmp;

	if( stkTop == -1 )
		return( stkTop );
	else {
		stackTopTmp = dataStk[ stkTop ];
		stkTop--;
		return( stackTopTmp );
	}
}
