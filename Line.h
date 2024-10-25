#pragma once
#include "basepoint.h"
#include "VSTUB.H"


class Line : public virtual BasePoint {
protected:
	int x1, y1, x2, y2;
public:
	Line() {};
	Line(int x1, int y1, int  x2, int  y2, int x0, int y0, int r, int g, int b): 
		x1(x1), y1(y1), x2(x2), y2(y2), BasePoint(x0, y0, r, g, b) {}

	void draw(bool flag);
};