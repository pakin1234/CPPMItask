//#include "OLine.h"
//#include "OArc.h"
#include "Object.h"
#include "VSTUB.H"
#include "Sector.h"

void Sector::draw_sector(bool flag) {
	OLine::draw(flag);
	OArc::draw(flag);
}

void Sector::move(int dx, int dy) {
	OArc::move(dx, dy);
	OLine::move(dx, dy);
}

const char* Sector::who() {
	return "OSector";
}
