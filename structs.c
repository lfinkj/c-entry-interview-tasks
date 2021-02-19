#include <stdio.h>
#include <string.h>
#include "functions.h"

struct Drone {
	char id[ TEN ];
	char type[ TEN ];
	int test;
	int battery;
	int coordinateX;
	int coordinateY;
	int coordinateZ;
} spaceDrone, forestDrone, arrayOfDrones[5]; // creating structs items with the declaration, which are globaly declared

struct Drone globalDrone; // globally declared struct drone, accessible to all functions

void droneStatus( struct Drone drone ); // pass by value function
void droneStatus2( struct Drone *drone ); // pass by address function

void structs() {

	struct Drone dronesArray[ TEN ]; // array of dronea

	dronesArray[ 0 ].test = 99;
	printf( "\naccess struct array elements element:\n    %i\n", dronesArray[ 0 ].test );

	for( int i = 0; i < TEN; i++ ) { // assigning elements to struct in an array
		dronesArray[ i ].test = i;
	}

	printf( "\nlooping struct array:\n    " ); // loop and print struct elements from an array
	for( int i = 0; i < TEN; i++ ) {
		printf( "%i ", dronesArray[ i ].test );
	}
	printf( "\n" );

// initiate drone structure
	struct Drone drone1;
	strcpy( drone1.id, "orbitalOne" );
	strcpy( drone1.type, "high altitude");
  //

	droneStatus( drone1 ); // pass by value
	droneStatus2( &drone1 ); // pass with address of
}
void droneStatus( struct Drone drone ) { // function called with passed by struct value

	printf( "\n%s", drone.id );
	printf( "\n%s\n", drone.type ); // using the . operator/struct member operator
}
void droneStatus2( struct Drone *drone ) { // function called with struct address of passed to it

	printf( "\n%s", drone->id );
	printf( "\n%s\n\n", drone->type ); // using the -> struct-pointer operator
}
