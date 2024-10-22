#pragma once
#include "Arc.h"
#include "Object.h"

class OArc : public Arca, public Object {
public:
	OArc() {};

	OArc(int center_x, int center_y, int radius, float startAngle, float sweepAngle, int x0, int y0, int r, int g, int b) :
		Arca(center_x, center_y, radius, startAngle, sweepAngle, x0, y0, r, g, b) {}
	
	const char* who();
};


