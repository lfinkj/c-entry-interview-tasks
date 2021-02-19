#include <stdio.h>
#include <stdlib.h>

void memManageRealloc() {
    int *memPtr, memCtr, mallocSize, reallocSize;

    printf( "\ninput memory block size: " );
    scanf( "%d", &mallocSize );

    memPtr = (int*) malloc( mallocSize * sizeof(int) ); // allocate memory with malloc with pointer memPtr

    printf( "memory locations with malloc:\n" );
    for( memCtr = 0; memCtr < mallocSize; ++memCtr ) {
        printf( "%p\n", memPtr + memCtr );
    }

    printf( "\ninput realloc memory size: " );
    scanf( "%d", &reallocSize );

    memPtr = realloc( memPtr, reallocSize * sizeof(int) ); // re-allocate with realloc using same pointer

    printf( "memory locations after realloc:\n" );
    for( memCtr = 0; memCtr < reallocSize; ++memCtr ) {
        printf( "%p\n", memPtr + memCtr );
    }
	printf( "\n" );
    free(memPtr);
}
