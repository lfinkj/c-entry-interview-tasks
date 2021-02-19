#include <stdio.h>

void flipMemContents( int *arg1, int *arg2 );
void addFive( int *ptr );

void functionsPointers() {

    int nine = 9, eleven = 11;
	int* ninesPointer = &nine;
	int* elevensPointer = &eleven;

	printf( "\nvalues in memory before  memory flip:\n" );
    printf( "variable nine = %d, and is at %p\n", nine, ninesPointer );
    printf( "variable eleven = %d, and is at %p\n", eleven, elevensPointer );
    
	flipMemContents( &nine, &eleven); // passing by using address of operator

	printf( "\nvalues in memory after memory flip:\n" );	
    printf( "variable nine now = %d, and is at %p\n", nine, ninesPointer );
    printf( "variable eleven now = %d, and is at %p\n\n", eleven, elevensPointer );

	printf( "----\n\n" );

	int* twosPointer, two = 2;  // create pointer and int two then initialize pointer with address of operator
	twosPointer = &two;

	printf( "printf of *twosPointer = %d\n", *twosPointer );
	printf( "mem address of variable two = %p\n", &two );
	printf( "address of the actual pointer = %p\n\n", &twosPointer );

	addFive( twosPointer );  // pass by using pointer

	printf( "printf of *twosPointer now = %d\n", *twosPointer );
	printf( "mem address of variable two = %p\n", &two );
	printf( "address of the actual pointer = %p\n\n", &twosPointer );
}

void flipMemContents( int* arg1, int* arg2 ) {

    int placeHolder;
    placeHolder = *arg1;
    *arg1 = *arg2;
    *arg2 = placeHolder;
}

void addFive( int* ptr ) {

	(*ptr)+=5; 
}
