#pragma once
#include "OLine.h"
#include "OArc.h"
#include "Object.h"

class Sector : public OLine, public OArc, public Object {
public:
	Sector(int x1, int y1, int x2, int y2, 
		int xc, int yc, int radius, float a1, float a2, int x0, int y0, int r, int g, int b): 
		OLine(x1, y1, x2, y2, x0, y0, r, g, b),
		OArc(xc, yc, radius, a1, a2, x0, y0, r, g, b),
		Object(){}

	void draw_sector(bool flag);
	void move(int dx, int dy);

	const char* who();
};