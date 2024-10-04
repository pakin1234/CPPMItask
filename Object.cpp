#include "Vect.h"
#include "Object.h"

// initialization of static element of class
Vector<int> Object::objectsNumber = {};

Object::Object()
{
	number = objectsNumber.get_number_elements() + 1;
	objectsNumber.push_back(number);
}

void Object::printObjectsNumber() {
	objectsNumber.print_vector();
}