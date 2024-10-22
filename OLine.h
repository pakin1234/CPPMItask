#pragma once
#include "Line.h"
#include "Object.h"

class OLine : public Line, public Object {
public:
	OLine() {};

	OLine(int x1, int y1, int  x2, int  y2, int x0, int y0, int r, int g, int b) :
		Line(x1, y1, x2, y2, x0, y0, r, g, b) {}

	const char* who();
};
