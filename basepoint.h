#pragma once
class BasePoint
{
protected:
	int x0, y0;
	int r, g, b;
public:
	BasePoint(int x0, int y0,int r, int g, int b) : x0(x0), y0(y0), r(r), g(g), b(b) {}


	virtual void draw(bool flag) = 0;
	void move(int dx, int dy);
};


