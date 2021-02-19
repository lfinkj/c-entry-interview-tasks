#include <stdio.h>

void stringFlip() {
	char word[255],
		*wordPtr,
		*wordPtrTwo,
		tmpVar;
	int ctr,
		ctr2;

	printf("\n");
	printf("input a word in which you want to reverse the characters of: ");
	scanf("%s", word);

	wordPtr = word;
	ctr = 1;

	while( *wordPtr != '\0' ) {
		wordPtr++;
		ctr++;
	}
	wordPtr--;
	wordPtrTwo = word;
	ctr2 = 1;

	while( ctr2 <= ctr / 2 ) {
		tmpVar = *wordPtr;
		*wordPtr = *wordPtrTwo;
		*wordPtrTwo = tmpVar;
		wordPtr--;
		wordPtrTwo++;;
		ctr2++;
	}

	printf("flip floped characters of original string: %s", word);
	printf("\n");
}
