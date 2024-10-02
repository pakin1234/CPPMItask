#include "basepoint.h"


void BasePoint::move(int dx, int dy) {
	draw(false);
	x0 += dx;
	y0 += dy;
	draw(true);
}