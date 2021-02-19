#include <stdio.h>
#include <ctype.h>
#include "main.h"

int runMenu( int );
void printMenu();
int getFunction( int );

int main() {

	int firstChoice = 0;

	clearTerminal();
	printf( "Welcome: input the code to run then press enter, type 0 or any non number character to quit:\n\n" );
	printMenu();

	scanf( "%d", &firstChoice );

	if( firstChoice == 0) {
		exit( 0 );
	}

	firstChoice = getFunction( firstChoice );

	firstChoice = runMenu( firstChoice );

	return 0;
}


int getFunction( int functionChoice ) {
	int pauseVal = 0;
	switch( functionChoice ) {
		case 1:
			arrayInsert();
			break;
		case 2:
			arrayRemove();
			break;
		case 3:
			matchArrayValues();
			break;
		case 4:
			combineArrays();
			break;
		case 5:
			isPalindrome();
			break;
		case 6:
			removeDuplicates();
			break;
		case 7:
			charCountInStr();
			break;
		case 8:
			memManagementMalloc();
			break;
		case 9:
			identityMatrix();
			break;
		case 10:
			sumInputCalloc();
			break;
		case 11:
			functionsPointers();
			break;
		case 12:
			differenceOfSets();
			break;
		case 13:
			arraysPointers();
			break;
		case 14:
			multiplyMatrices();
			break;
		case 15:
			memManageRealloc();
			break;
		case 16:
			checkMatrixDensity();
			break;
		case 17:
			firstRepeatCharInStr();
			break;
		case 18:
			runRecursion();
			break;
		case 19:
			stringsPointersMemory();
			break;
		case 20:
			structs();
			break;
		case 21:
			typedefStructs();
			break;
		case 22:
			vowelsToUppercase();
			break;
		case 23:
			struct01();
			break;
		case 24:
			stringFlip();
			break;
		case 25:
			returnValues();
			break;
		case 26:
			recursiveLinkedList();
			break;
		case 27:
			recursionTest();
			break;
		case 28:
			recursiveDiv();
			break;
		case 29:
			pointersArraysVals();
			break;
		case 30:
			loopLinkedList();
			break;
		case 31:
			//hexBinConvert();
			printf( "need to link math lib for pow()" );
			break;
		case 0:
			exit( 0 );
		default:
		;
	}
	printf( "\n\nPress 1 to see more code, 0 to exit, followed by Enter:\n" );
	scanf( "%d", &pauseVal );
	if( pauseVal == 0 )
		exit( 0 );
	return pauseVal;
}
int runMenu( int selection ) {
	
	int menuItem = 0;

	clearTerminal();
	if( selection >= 1 && selection <= 31 ) {
		printf( "Input the code to run then press enter, 0 or any non number character to quit:\n\n" );
	} else {
		printf( "Your selection is out of range, choose again:\n\n" );
	}
	printMenu();

	scanf( "%d", &menuItem );
	printf( "\n" );

	if( menuItem == 0 ) {
		exit( 0 );
	}

	menuItem = getFunction( menuItem );

	menuItem = runMenu( menuItem );

	return menuItem; 
}
void printMenu() {

	printf(
		"[ 1. ] arrayInsert.c ---- \n" \
		"[ 2. ] arrayRemove.c ---- \n" \
		"[ 3. ] matchArrayValues.c ---- \n" \
		"[ 4. ] combineArrays.c ---- \n" \
		"[ 5. ] isPalindrome.c ---- \n" \
		"[ 6. ] removeDuplicates.c ---- \n" \
		"[ 7. ] charCountInStr.c ---- \n" \
		"[ 8. ] memManageMalloc.c ---- \n" \
		"[ 9. ] identityMatrix.c ---- \n" \
		"[ 10. ] sumInputCalloc.c ---- \n" \
		"[ 11. ] functionsPointers.c ---- \n" \
		"[ 12. ] differenceOfSets.c ---- \n" \
		"[ 13. ] arraysPointers.c ---- \n" \
		"[ 14. ] multiplyMatrices.c ---- \n" \
		"[ 15. ] memManageRealloc.c ---- \n" \
		"[ 16. ] checkMatrixDensity.c ---- \n" \
		"[ 17. ] firstRepeatCharInStr.c ---- \n" \
		"[ 18. ] simpleRecursion.c ---- \n" \
		"[ 19. ] stringsPointersMemory.c ---- \n" \
		"[ 20. ] structs.c ---- \n"
		"[ 21. ] typedefStructs.c ---- \n"
		"[ 22. ] vowelsToUppercase.c ---- \n"
		"[ 23. ] struct01.c ---- \n"
		"[ 24. ] stringFlip.c ---- \n"
		"[ 25. ] returnValues.c ---- \n"
		"[ 26. ] recursiveLinkedList.c ---- \n"
		"[ 27. ] recursionTest01.c ---- \n"
		"[ 28. ] recursiveDiv.c ---- \n"
		"[ 29. ] pointersArraysVals.c ---- \n"
		"[ 30. ] loopLinkedList.c ---- \n"
		"[ 31. ] hexBinConvert.c ---- \n"
	);
	printf( "\nChoose:  " );
}
