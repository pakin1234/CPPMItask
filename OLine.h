#pragma once
#include "basepoint.h"
#include "VSTUB.H"
#include "Object.h"
#include "Line.h"


class OLine : public Line, public virtual BasePoint, public virtual Object {
protected:
	int x1, y1, x2, y2;
public:
	OLine() {};
	OLine(int x1, int y1, int  x2, int  y2, int x0, int y0, int r, int g, int b) :
		Line(x1, y1, x2, y2, x0, y0, r, g, b), BasePoint(x0, y0, r, g, b) {}

	const char* who();
	void draw(bool flag);
};
