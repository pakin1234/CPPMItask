#pragma once
#include "Line.h"
#include "Arc.h"


class Sector : public Line, public Arca, virtual public Object, virtual public BasePoint {
public:
	Sector(int xc, int yc, int radius, float a1, float a2, int x0, int y0, int r, int g, int b) :
		BasePoint(x0, y0, r, g, b),
		Arca(xc, yc, radius, a1, a2, x0, y0, r, g, b),
		Line(xc + radius * cos(a1), yc - radius * sin(a1), xc + radius * cos(a2), yc - radius * sin(a2), x0, y0, r, g, b),
		Object() {};

	void draw(bool flag);;
	void move(int dx, int dy);
	const char* who();
};