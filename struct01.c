#include <stdio.h>
#include <string.h>

typedef struct Node {
	char name[15];
	int id;
	struct Node *nextNode;
} Node;

Node newNode( int, char * );
void exampleNode();

int struct01() {

	exampleNode();
	return( 0 );
}

Node newNode( int nbr, char *name ) {

	Node node;
	strcpy( node.name, name );
	node.id = nbr;

	return node;
}
void exampleNode() {

	int firstNbr = 1;
	char firstName[] = "first node";
	Node firstNode = newNode( firstNbr, firstName );
	
	printf( "\n%s id = %d\n", firstNode.name, firstNode.id );
}
