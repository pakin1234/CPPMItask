#pragma once
#include "VSTUB.H"
#include "Object.h"
#include "Arc.h"

class OArca : public Arca, public virtual Object {
protected:
	int center_x, center_y;
	int radius;
	float startAngle, sweepAngle;
public:
	OArca(int center_x, int center_y, int radius, float startAngle, float sweepAngle, int x0, int y0, int r, int g, int b) :
		BasePoint(x0, y0, r, g, b),
		Arca(center_x, center_y, radius, startAngle, sweepAngle, x0, y0, r, g, b) {}


	void draw(bool flag);

	const char* who();
};