#include "VSTUB.H"
#include "Sector.h"

void Sector::draw(bool flag) {
	Line::draw(flag);
	Arca::draw(flag);
}

void Sector::move(int dx, int dy) {
	Arca::move(dx, dy);
	Line::move(dx, dy);
}

const char* Sector::who() {
	return "OSector";
}
