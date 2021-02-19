#include <stdio.h>

typedef struct Spaceship {
	int id;
	int locationX;
	int locationY;
} spaceships;

void typedefStructs() {

	spaceships shipOne, shipTwo;
	shipOne.id = 5;
	shipOne.locationX = 102;
	shipOne.locationY = 73;

	printf( "\nspaceship struct:\n    id = %d, locationX = %d, locationY = %d\n", shipOne.id, shipOne.locationX, shipOne.locationY );

}
