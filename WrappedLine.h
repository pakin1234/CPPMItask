#include "Line.h"

class WrappedLine : public Line {
public:
	WrappedLine(int x1, int y1, int  x2, int  y2, int x0, int y0, int r, int g, int b):
		BasePoint(x0, y0, r, g, b),
		Line(x1, y1, x2, y2, x0, y0, r, g, b) {}
};