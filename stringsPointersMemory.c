#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void stringsPointersMemory() {

	char sentence[ sentenceMAX ];
	char tmpChar;
	int tmpInt, memSize;

	int *intPointer;
	char *charPointer;

// create and fill character array (string)

	/*
	printf( "\nType a phrase less than 250 characters: " );
	gets( sentence );
	*/
	strcpy( sentence, "testing one two three" );
	printf( "\nprinted string(char array) with printf and format specifier s:\n    %s\n", sentence );
  //

// pointer to array element
	char * charPtr = &sentence[ 3 ];
	printf( "\nprinted pointer to char array[ 3 ]:\n    %p\n", charPtr);
	printf( "\nprinted single char from char array[ 3 ]:\n    %c\n", sentence[ 3 ] );
  //

// get value by dereferencing the pointer with the val = *pointer) syntax
	tmpChar = *charPtr;
	printf( "\nprinted single char from dereference syntax:\n    %c\n", tmpChar );
  //

// loop string (char array) and stop at '\0' null character
	printf( "\nprinted char array (string) with for loop:\n    " );
	for( int i = 0; i < sentenceMAX; i++ ) {
		if( sentence[ i ] == '\0' )
			break;
		printf( "%c ", sentence[ i ] );
	}
	printf( "\n\n" );
  //

// allocate with malloc
	printf( "intPointer was:    %p\n", intPointer );

	if( intPointer = ( int* ) malloc( 10 * sizeof( int ) ) ) {
		printf( "intPointer is now:    %p\n", intPointer );
		printf( "printed malloc return value:\n    %p\n\n", intPointer );

		tmpInt = 37;
		*intPointer = tmpInt;

		printf( "printed < *intPointer = tmpInt >, set by dereference * syntax:\n    %i", *intPointer );
		printf( "\n\n" );
	}else {
		printf( "malloc fail\n\n" );
	}
  //
	
// observing memory and malloc
	printf( "please enter a size for memory allocation: " );
	scanf( "%d", &memSize );
	
	printf( "intPointer was:    %p\n", intPointer );
	printf( "charPointer was:    %p\n", charPointer );

	if( (intPointer = (int*) malloc( memSize*sizeof(int) )) && (charPointer = (char*) malloc( memSize*sizeof(char) )) ) {
		printf( "\nintPointer is now:    %p\n", intPointer );
		printf( "charPointer is now:    %p\n", charPointer );

		printf( "\ninteger pointer addresses are:\n" );
		for( int i = 0; i < memSize; i++ ) {
			printf( "    %p + %d : %p\n", intPointer, i, (intPointer + i) );
		}

		printf( "\ncharacter pointer addresses are:\n" );
		for( int i = 0; i < memSize; i++ ) {
			printf( "    %p + %d : %p\n", charPointer, i, (charPointer + i) );
		}

	// initialize by dereference < *pointer = value; >
		*(intPointer+1) = 71; 
		*(charPointer+2) = 'x';
	  //

		printf( "\nvalue at address (intPointer + 1):\n    %d\n", *(intPointer+1) );
		printf( "value at address (charPointer + 2):\n    %c\n", *(charPointer+2) );
	}else {
		printf( "malloc fail" );
	}
  //


// initializing with address of and dereference syntax
	int nbrTen = 10;
	char charX = 'X';

	int *intPtr;
	char *chaPtr;

	intPtr = &nbrTen;
	chaPtr = &charX;

	printf( "\nusing pointers:\n" );
	printf( "    nbrTen = %d and is at:    %p", nbrTen, intPtr );
	printf( "\n    charX = %c and is at:    %p\n", charX, chaPtr );

	printf( "\nusing address of operator:" );
	printf( "\n    nbrTen = %d and is at:    %p", nbrTen, &nbrTen );
	printf( "\n    charX = %c and is at:    %p\n", charX, &charX );

	*( &nbrTen ) = 77;
	*( &charX ) = 'v';

	printf( "\nnbrTen changed by dereferencing address of statement:    *( &nbrTen ) = 77    and now is: %d", nbrTen );
	printf( "\ncharX changed by dereferencing address of statement:    *( &charX ) = v    and now is: %c\n\n", charX );
  //
}
