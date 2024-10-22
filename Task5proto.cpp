#include <time.h>
#include "vstub.h"
#include "Line.h"
#include "Arc.h"
#include "basepoint.h"
#include "Vect.h"
#include "Sector.h"
#include "CompositeShape.h"
#include "Object.h"

// draw(true) - paint figure
// draw(false) - delete figure

namespace std{

int main(void){

	vc << " ";

	drawgrid();

	int x0 = 1;
	int y0 = 2;

	Sector sector(100, 200, 50, 0, 2, x0, y0, 255, 255, 0);
	vgetchar();

	sector.draw_sector(true);
	vgetchar();

	sector.move(50, 50);
	vgetchar();

	CompositeShape segment(200, 300, 50, 0, 2, 1, 2, 0, 255, 200);
	vgetchar();

	segment.draw_shape(true);
	vgetchar();

	segment.move(50, 50);
	vgetchar();

	const char* segment_who = segment.who();
	vc << segment_who;
	vgetchar();

	return 0;
}
}