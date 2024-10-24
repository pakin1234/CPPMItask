#include "VSTUB.H"
#include "Segment.h"

void Segment::draw(bool flag) {
	arc.draw(flag);
	line1.draw(flag);
	line2.draw(flag);
}

void Segment::move(int dx, int dy) {
	arc.move(dx, dy);
	line1.move(dx, dy);
	line2.move(dx, dy);
}

const char* Segment::who() {
	return "Segment";
}