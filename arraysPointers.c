#include <stdio.h>

void arraysPointers()
{
    int ctr;

//
    int array[7];
    printf("\narray memory address: %p\n", array);
    for(ctr = 0; ctr < 7; ++ctr) {
       printf("&array[%d] = %p\n", ctr, &array[ctr]);
    }
  // endblock

	printf( "----\n" );

//
	int array2Len = 10;
    int array2[ array2Len ], result = 0;
    printf( "input 10 integers: " );
    for( ctr = 0; ctr < array2Len; ++ctr ) {
        scanf( "%d", array2+ctr );  // scanf( "%d", &array2[i] );
        result += *( array2+ctr );  // result += array2[i]
    }
    printf( "result = %d\n", result );
  // endblock

	printf( "----\n" );

//
  	int array3[ 9 ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int* arrPointer;
	int* arrIndexOnePtr;
	int* arrIndexTwoPtr;
  	int* pointer;

	arrPointer = array3;
	arrIndexOnePtr = &array3[ 0 ];
	arrIndexTwoPtr = &array3[ 1 ];
  	pointer = &array3[ 2 ]; // 3rd element memory address pointer

	printf( "pointer to array = %p\n", arrPointer );
	printf( "pointer to array[ 0 ] = %p\n", arrIndexOnePtr );
	printf( "pointer to array[ 1 ] = %p\n", arrIndexTwoPtr );
	printf( "----\n" );
  	printf( "*pointer = %d \n", *pointer );   // array3[ 2 ] = 3
  	printf( "*(pointer+1) = %d \n", *(pointer+1) ); // array3[ 3 ] = 4
  	printf( "*(pointer-1) = %d\n\n", *(pointer-1) );  // array3[ 1 ] = 2
  // endblock
}
