#include <stdio.h>
#include "functions.h"

void arrayRemove()
{

	int array[max];
	int ctri, arrLen, deletePosition;

// scan in array length and elements
	printf("type a length for the array: ");
	scanf("%d", &arrLen);

	printf("type %d elements for the array \n", arrLen);
	for (ctri = 0; ctri <= arrLen - 1; ctri++)
	{
		scanf("%d", &array[ctri]);
	}
  // endblock scan in array length and elements

	printf("\nprinted array contents:\n");
	for (ctri = 0; ctri <= arrLen - 1; ctri++)
	{
		printf("%d\n", array[ctri]);
	}

// scan in array index to delete, shift rest of array elements
	printf("which array index do you want to delete: ");
	scanf("%d", &deletePosition);
	deletePosition--;
	for (ctri = deletePosition; ctri <= arrLen - 2; ctri++)
	{
		array[ctri] = array[ctri + 1]; // shift array elements after index deletion
	}
  // endblock scan in array index to delete, shift rest of array elements

	array[arrLen - 1] = 0; // set last array index to 0

	printf("printed array contents:\n");
	for (ctri = 0; ctri <= arrLen - 2; ctri++)
	{
		printf("%d\n", array[ctri]);
	}

}
