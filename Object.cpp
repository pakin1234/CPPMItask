#include "Object.h"

// initialization of static element of class
int Object::NumberCount = 1;

Object::Object(){
	numb = NumberCount++;
}

//int Object::get_number() {
//	return numb;
//}