#pragma once
#include "OLine.h"
#include "OArc.h"
#include "Object.h"

class CompositeShape : public OLine, public OArc, public Object{
protected:
	OLine line1;
	OLine line2;
	OArc arc_connecting;
public:
	CompositeShape(int x1_1, int y1_1, int x2_1, int y2_1,
		int x1_2, int y1_2, int x2_2, int y2_2,
		int xc, int yc, int radius, float a1, float a2,
		int x0, int y0, int r, int g, int b) :
		line1(x1_1, y1_1, x2_1, y2_1, x0, y0, r, g, b),
		line2(x1_2, y1_2, x2_2, y2_2, x0, y0, r, g, b),
		arc_connecting(xc, yc, radius, a1, a2, x0, y0, r, g, b),
		Object() {};

	void draw_shape(bool flag);
	void move(int dx, int dy);

	const char* who();
};
