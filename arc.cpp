#include "Arc.h"
#include "VSTUB.H"

void Arca::draw(bool flag) {
	if (!flag)
	{
		std::setcolor(0, 0, 0);
		std::drawarc(center_x + x0, center_y + y0, radius, startAngle, sweepAngle);
		return;
	}
	std::setcolor(r, g, b);
	std::drawarc(center_x + x0, center_y + y0, radius, startAngle, sweepAngle);
}