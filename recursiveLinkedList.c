#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int runLoop( int );
void makeNode();

int ctr;
char nodeName[] = "NODE";

struct LinkedNode {
	int id;
	char name[ 5 ];
	struct LinkedNode *nextNode;
};

int recursiveLinkedList() {

	ctr = 0;
	runLoop( 1 );

	return( 0 );
}
int runLoop( int option ) {
	
	printf( "\n%d\n", ctr );
	ctr++;

	if( option == 1 ) {

		makeNode();
		printf( "\n1 to continue, 2 to print, 0 to quit\n" );
		scanf( "%d", &option );
		runLoop( option );
	} else if( option == 2 ) {
		
		makeNode();

		printf( "\nyou printed: %d\n", option );

		printf( "\n1 to continue, 2 to print, 0 to quit\n" );
		scanf( "%d", &option );
		runLoop( option );
	} else {

		return( 0 );
	}

}
void makeNode() {
	
	struct LinkedNode *node;
	node = ( struct LinkedNode * ) malloc( sizeof( struct LinkedNode ) );
	node->id = ctr;
	strcpy( node->name, nodeName );
	node->nextNode = NULL;

	printf( "\nid = %d -- name = %s -- next = %p\n", node->id, node->name, &node );
}
