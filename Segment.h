#pragma once
#include "Line.h"
#include "Arc.h"

class Segment : public Line, public Arca, public virtual BasePoint, virtual public Object {
protected:
	Line line1;
	Line line2;
	Arca arc;
public:
	Segment(int xc, int yc, int radius, float a1, float a2,
		int x0, int y0, int r, int g, int b) :
		BasePoint(x0, y0, r, g, b),
		arc(xc, yc, radius, a1, a2, x0, y0, r, g, b),
		line1(xc, yc, xc + radius * cos(a1), yc - radius * sin(a1), x0, y0, r, g, b),
		line2(xc, yc, xc + radius * cos(a2), yc - radius * sin(a2), x0, y0, r, g, b), 
		Object() {};

	void draw(bool flag);
	void move(int dx, int dy);

	const char* who();
};
