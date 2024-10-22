#include "Object.h"
#include "VSTUB.H"
#include "CompositeShape.h"

void CompositeShape::draw_shape(bool flag) {
	arc_connecting.draw(flag);
	line1.draw(flag);
	line2.draw(flag);
}

void CompositeShape::move(int dx, int dy) {
	arc_connecting.move(dx, dy);
	line1.move(dx, dy);
	line2.move(dx, dy);
}

const char* CompositeShape::who() {
	return "Segment";
}