#include "Line.h"
#include "vstub.h"

void Line::draw(bool flag) {
	if (!flag)
	{
		std::setcolor(0, 0, 0);
		std::drawline(x1 + x0, y1 + y0, x2 + x0, y2 + y0);
		return;
	}
	std::setcolor(r, g, b);
	std::drawline(x1 + x0, y1 + y0, x2 + x0, y2 + y0);
}
