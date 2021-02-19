#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
	char name[15];
	int id;
	struct Node *nextNode;
} Node;

Node headNode( int, char *, Node * );
Node newNode( int, char *, Node * );
Node lastNode( int, char *, Node * );

int main() {
	
	Node node1 = headNode( 71, "node 71", NULL );
	
	printf( "\nnode1 with id %d is at %p\nnode1 with name %s is at %p\n", node1.id, &node1.id, node1.name, &node1.name );

	return( 0 );
}

Node headNode( int nbr, char *name, Node *node ) {

	Node *headNode = ( Node * ) malloc( sizeof( Node ) );
	headNode->id = nbr;
	strcpy( headNode->name, name );
	headNode->nextNode = NULL;

	return *headNode;
}
Node newNode( int nbr, char *name, Node *node ) {

	Node *newNode = ( Node * ) malloc( sizeof( Node ) );
	newNode->id = nbr;
	strcpy( newNode->name, name );
	newNode->nextNode = NULL;

	return *newNode;
}
Node lastNode( int nbr, char *name, Node *node ) {

	Node *lastNode = ( Node * ) malloc( sizeof( Node ) );
	lastNode->id = nbr;
	strcpy( lastNode->name, name );
	lastNode->nextNode = NULL;

	return *lastNode;
}
