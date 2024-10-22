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

	int center_x = 150; 
	int center_y = 250;
	int radius = 50;     
	float startAngle = 0; 
	float sweepAngle = 3.17;
	int x1 = 100;
	int y1 = 250;
	int x2 = 200;
	int y2 = 250;
	int x0 = 0;        
	int y0 = 0;
	int r = 255;         
	int g = 0;
	int b = 0;

	Sector sector(x1, y1, x2, y2, center_x, center_y, radius, startAngle, sweepAngle, x0, y0, r, g, b);
	vgetchar();

	sector.draw_sector(true);
	vgetchar();

	sector.move(50, 50);
	vgetchar();

	CompositeShape segment(50, 50, 100, 100, 100, 40, 100, 100, 75, 50, 25, 0, 3.14, 0, 0, 255, 0, 0);
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