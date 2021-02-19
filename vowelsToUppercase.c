#include <stdio.h>

void vowelsToUppercase() {
	char phrase[255];
	int  ctr;
	printf("please type in a short phrase: ");
	gets( phrase );
	ctr=0;
	while( phrase[ctr]!='\0' ) {
		if (
			phrase[ctr] == 'a'
			|| phrase[ctr] == 'e'
			|| phrase[ctr] == 'i'
			|| phrase[ctr] == 'o'
			|| phrase[ctr] == 'u'
			) {
			phrase[ctr] = ( phrase[ctr] -32 );
		}
		ctr++;
	}
	printf("\nlowercase vowels to uppercase conversion results:\n    ");
	puts( phrase );
}
