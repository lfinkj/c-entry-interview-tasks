#include<stdio.h>
#include <stdlib.h>

struct dataNode {
	int element;
	struct dataNode *nodeLink;
};
void main() {
	struct dataNode *headNode,
		*node2,
		*loopNode,
		*newNode,
		*lastNode;

	int listSize,
		int1,
		ctr,
		ctr2;

	lastNode = NULL;
	printf("input a size for the linked list: ");
	scanf("%d", &listSize);

	printf("input the integer contents of the list:\n");
	for(ctr = 1; ctr <= listSize; ctr++) {
		if (lastNode == NULL) {
			newNode = (struct dataNode*) malloc( sizeof(struct dataNode) );
			scanf("%d", &newNode->element);
			newNode->nodeLink = NULL;
			lastNode = newNode;
			headNode = lastNode;
		}
		else {
			newNode = (struct dataNode*) malloc( sizeof(struct dataNode) );
			scanf("%d", &newNode->element);
			newNode->nodeLink = NULL;
			headNode->nodeLink = newNode;
			headNode = newNode;
		}
	}

	for(ctr = listSize - 2; ctr >= 0; ctr--) {

		headNode = lastNode;
		node2 = headNode->nodeLink;

		for(ctr2 = 0; ctr2 <= ctr; ctr2++) {

			if( headNode->element > node2->element ) {
				int1 = headNode->element;
				headNode->element = node2->element;
				node2->element = int1;
			}
			headNode = node2;
			node2 = node2->nodeLink;
		}
	}

	printf("ordered linked list contents: \n");
	loopNode = lastNode;

	while(loopNode != NULL) {

		printf("%d\t", loopNode->element);
		loopNode = loopNode->nodeLink;
	}
}
