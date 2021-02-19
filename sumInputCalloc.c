#include <stdio.h>
#include <stdlib.h>

void sumInputCalloc() {
    int memBlockSize, memCtr, * memPtr, total = 0;

    printf( "\ninput memory block size: " );
    scanf( "%d", &memBlockSize );

    memPtr = (int*) calloc( memBlockSize, sizeof(int) ); // calloc initializes memory block and sets them to 0

    if ( memPtr == NULL ) {
        printf( "memory allocation errir:" ); // exit if allocation error
        exit( 0 );
    }

    printf( "input values: " );
    for ( memCtr = 0; memCtr < memBlockSize; ++memCtr ) {
        scanf( "%d", memPtr + memCtr );
        total += *( memPtr + memCtr ); // loop and sum memory blocks with *( value ) pointer syntax
    }

    printf( "Sum = %d\n\n", total );
    free( memPtr );
}
