#include <stdio.h>
#include "functions.h"

void arrayInsert()
{

	int arr[max];
	int arrLength, ctr, insertIndex, arrShift;

// scan in array length and array elements
	printf("type a length for the array: ");
	scanf("%d", &arrLength);

	printf("type %d elements for the array separated by spaces:\n", arrLength);
	for (ctr = 0; ctr <= arrLength - 1; ctr++)
	{
		scanf("%d", &arr[ctr]);
	}
  // endblock scan in array length and array elements

	printf("print array contents:\n");
	for (ctr = 0; ctr <= arrLength - 1; ctr++)
	{
		printf("%d\n", arr[ctr]);
	}

// scan in the array insert data
	printf("\nwhere in the array do you want to insert:");
	scanf("%d", &insertIndex);
	insertIndex--;

	for (arrShift = arrLength - 1; arrShift >= insertIndex; arrShift--)
	{
		arr[arrShift + 1] = arr[arrShift]; // shift array elements by 1 index after insert
	}

	printf("\ntype a value to input:");
	scanf("%d", &arr[insertIndex]);
  // endblock scan in the array insert data

	printf("\nprint final array contents: \n");
	for (ctr = 0; ctr <= arrLength; ctr++)
	{
		printf("%d\n", arr[ctr]);
	}

}
