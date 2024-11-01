#include "VSTUB.H"
#include "Segment.h"

void Segment::draw(bool flag) {
	Line::draw(flag);
	Arca::draw(flag);
}

//void Segment::move(int dx, int dy) {
//	Arca::move(dx, dy);
//	Line::move(dx, dy);
//}

const char* Segment::who() {
	return "Segment";
}
