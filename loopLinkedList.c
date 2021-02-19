#include <stdio.h>
#include <stdlib.h>

int ctr;

struct ListNode {
	int id;
	struct ListNode *link;
};

int loopLinkedList() {

	struct ListNode *headNode, *tmpNode;

	for( int i = 0; i < 5; i++ ) {
		struct ListNode *node = ( struct ListNode * ) malloc( sizeof( struct ListNode ) );
		node->id = i;
		
		if( i == 0 ) {
			
		}else {
			
		}

		printf( "\nnode %d at %p and next node at %p", node->id, node, node->link );
	}
		printf( "\nhead node %d at %p and next node at %p", headNode->id, headNode, headNode->link );

}
