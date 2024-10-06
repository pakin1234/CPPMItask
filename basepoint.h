#pragma once
// draw(true) - paint figure
// draw(false) - delete figure

class BasePoint
{
protected:
	int x0, y0;
	int r, g, b;
public:
	BasePoint(int x0 = 0, int y0 = 0, int r = 255, int g = 0, int b = 0) : x0(x0), y0(y0), r(r), g(g), b(b) {}


	virtual void draw(bool flag) = 0;
	void move(int dx, int dy);
};