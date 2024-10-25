#include "Arc.h"
#include "VSTUB.H"

void Arca::draw(bool flag) {
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
	std::drawarc(center_x + x0, center_y + y0, radius, startAngle, sweepAngle);
}
