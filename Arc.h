#pragma once
#include "basepoint.h"
#include "VSTUB.H"


class Arca: public BasePoint {
private:
	int center_x, center_y;
	int radius;
	float startAngle, sweepAngle;
public:
	Arca() {};
	Arca(int center_x, int center_y, int radius, float startAngle, float sweepAngle, int x0, int y0, int r, int g, int b):
		 center_x(center_x), center_y(center_y), radius(radius), startAngle(startAngle), sweepAngle(sweepAngle), BasePoint(x0, y0, r, g, b) {}


	void draw(bool flag);
};