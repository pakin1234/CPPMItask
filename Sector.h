#pragma once
#include "Line.h"
#include "Arc.h"
#include "Object.h"

class Sector : public Line, public Arca, public Object {
private:
	int r, g, b;
public:
	Sector(int x1, int y1, int x2, int y2, 
		int xc, int yc, int radius, float a1, float a2, int x0, int y0, int r, int g, int b):
		Line(x1, y1, x2, y2, x0, y0, r, g, b), 
		Arca(xc, yc, radius, a1, a2, x0, y0, r, g, b),
		Object() {}

	void draw_sector(bool flag);
	void move(int dx, int dy);
};