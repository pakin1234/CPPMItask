#pragma once
#include "OLine.h"
#include "OArc.h"
#include "Object.h"

class CompositeShape : public OLine, public OArc, public Object{
protected:
	OLine line1;
	OLine line2;
	OArc arc;
public:
	CompositeShape(int xc, int yc, int radius, float a1, float a2,
		int x0, int y0, int r, int g, int b) :
		arc(xc, yc, radius, a1, a2, x0, y0, r, g, b),
		line1(xc, yc, xc + radius * cos(a1), yc - radius * sin(a1), x0, y0, r, g, b),
		line2(xc, yc, xc + radius * cos(a2), yc - radius * sin(a2), x0, y0, r, g, b) {};

	void draw_shape(bool flag);
	void move(int dx, int dy);

	const char* who();
};
