#include "VSTUB.H"
#include "Sector.h"

void Sector::draw(bool flag) {
	Arca::draw(flag);
	Line::draw(flag);
	WrappedLine::draw(flag);
}

//void Sector::move(int dx, int dy) {
//	Arca::move(dx, dy);
//	Line::move(dx, dy);
//	WrappedLine::move(dx, dy);
//}

const char* Sector::who() {
	return "Sector";
}