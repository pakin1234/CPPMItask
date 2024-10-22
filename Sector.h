#pragma once
#include "OLine.h"
#include "OArc.h"
#include "Object.h"

class Sector : public OLine, public OArc, public Object {
public:
	Sector(int xc, int yc, int radius, float a1, float a2, int x0, int y0, int r, int g, int b) :
		OArc(xc, yc, radius, a1, a2, x0, y0, r, g, b),
		OLine(xc + radius * cos(a1), yc - radius * sin(a1), xc + radius * cos(a2), yc - radius * sin(a2), x0, y0, r, g, b) {};

	void draw_sector(bool flag);
	void move(int dx, int dy);

	const char* who();
};