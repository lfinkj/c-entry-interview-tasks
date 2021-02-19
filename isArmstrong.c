#include <stdio.h>
#include <math.h>

#define max 15

int stackData[ max ];
int stackPtr = -1;

int isArmstrongNbr( int );
int stackPop();
void stackPush( int );

void main() {

	int testNbr;

	printf( "\ntype a number to check: " );   
	scanf( "%d", &testNbr );
	if( isArmstrongNbr(testNbr) )
		printf("    %d passed armstrong test", testNbr);
	else
		printf("    %d failed armstrong test", testNbr);
	printf( "\n\n" );
}
int isArmstrongNbr( int nbr ) {

	int p, rem, tmp, cnt, val;
	tmp = nbr;
	cnt = 0;

	while( nbr > 0 ) {
		rem = nbr % 10;
		stackPush( rem );
		cnt++;
		nbr = nbr / 10;
	}
	nbr = tmp;

	val = 0;
	while( stackPtr >= 0 ) {
		p = stackPop();
		val = val + pow(p, cnt);
	}
	if ( val == nbr )
		return 1;
	else
		return 0;
}
void stackPush( int sp ) {

	stackPtr++;
	stackData[stackPtr] = sp;
} 
int stackPop() {

	int p;
	if( stackPtr == -1 )
		return(stackPtr);
	else {
		p = stackData[stackPtr];
		stackPtr--;
		return( p );
	}
}
