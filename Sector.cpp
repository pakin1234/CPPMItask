#include "Line.h"
#include "Arc.h"
#include "Object.h"
#include "VSTUB.H"
#include "Sector.h"

void Sector::draw(bool flag) {
	Line::draw(flag);
	Arca::draw(flag);
}

void Sector::move(int dx, int dy) {
	Line::move(dx, dy);
	Arca::move(dx, dy);
}
