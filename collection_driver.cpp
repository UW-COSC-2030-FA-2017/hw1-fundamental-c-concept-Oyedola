//Oyedola Ajao
//HW1 - part 2/2

#include <iostream>
#include "collection.h"

using namespace std; 

int main()
{
	collection <int> b(9);

	int thisArray[] = { 1, 2, 3, 7, 89, 1, 8, 3 };

	b.set(thisArray);

	b.getsize(); // gets the size of the array at this time

	b.print(); //prints out array

	b.isEmpty(); //checks to see if there are no objects in the collection by returnng true (when it's empty) and returning false (when it is not empty)

	b.insert(15); //inserts an object "x" into the collection

	b.print(); //prints out array

	b.remove(15); //removes an object "x" from the collection (so long as the object exists)

	b.print(); //prints out array

	b.removeRandom(); //removes an object at random from the collection
	
	b.print(); //prints out array

	//returns true if and only if (iff) an object that is equal to "x" is not present in the collection

	b.notContained(7);

	b.makeEmpty(); //removes all objects from the collection

	b.print(); //prints out array

	return 0;
}

