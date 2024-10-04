#pragma once
#include "Vect.h"


class Object
{
private:
	int number;
	static Vector<int> objectsNumber;
public:
	Object();
	static void printObjectsNumber();
};



