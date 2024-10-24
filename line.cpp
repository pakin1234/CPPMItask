#include "Line.h"
#include "vstub.h"

void Line::draw(bool flag) {
	int red, green, blue;

	if (!flag)
	{
		red = 0;
		green = 0;
		blue = 0;
	}
	else {
		red = r;
		green = g;
		blue = b;
	}
	std::setcolor(red, green, blue);
	std::drawline(x1 + x0, y1 + y0, x2 + x0, y2 + y0);
}

const char* Line::who() {
	return "OSector";
}
