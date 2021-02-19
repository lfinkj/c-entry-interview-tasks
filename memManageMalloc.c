#include <stdio.h>
#include <stdlib.h>

void memManagementMalloc() {
    int memBlockSize, memCtr, *memPtr, total = 0;

    printf( "\ninput memory block size: " );
    scanf( "%d", &memBlockSize );

    memPtr = ( int* ) malloc( memBlockSize * sizeof(int) ); // allocate memory block from user input
 
    if( memPtr == NULL ) {
        printf("memory allocation failure");
        exit(0); // exit if allocation failure
    }

    printf("Input values: ");
    for( memCtr = 0; memCtr < memBlockSize; ++memCtr ) {
        scanf( "%d", memPtr + memCtr );
        total += *( memPtr + memCtr ); // loop and sum memory block values with pointer syntax
    }

    printf( "total sum of memory contents = %d\n\n", total );
    free( memPtr );
}
