#include "OLine.h"


const char* OLine::who() {
	return "OLine";
}

void OLine::draw(bool flag) {
	Line::draw(flag);
}