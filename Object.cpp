#include "Vect.h"
#include "Object.h"
#include "VSTUB.H"

// initialization of static element of class
int Object::NumberCount = 1;

Object::Object(){
	numb = NumberCount + 1;
}