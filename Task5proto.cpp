#include <time.h>
#include "vstub.h"
#include "Line.h"
#include "Arc.h"
#include "basepoint.h"
#include "Vect.h"
#include "Sector.h"
#include "Segment.h"
#include "Object.h"

// draw(true) - paint figure
// draw(false) - delete figure

namespace std{

int main(void){

	vc << " ";

	drawgrid();

	int x0 = 100;
	int y0 = 0;

	Line line1(100, 200, 300, 400, x0, y0, 255, 150, 0);
	Arca arc1(100, 200, 20, 0, 10, x0, y0, 255, 150, 0);

	Sector sector(100, 200, 50, 0, 2, x0, y0, 255, 255, 0);
	BasePoint* segment = new Segment(200, 300, 50, 0, 2, x0, y0, 0, 255, 200);

	Vector<BasePoint*> figures;
	figures.push_back(&sector);
	figures.push_back(&arc1);
	figures.push_back(&line1);
	figures.push_back(segment);

	for (size_t i = 0; i < figures.get_number_elements(); i++)
	{
		figures[i]->draw(true);
		vgetchar();
	}

	for (size_t i = 0; i < figures.get_number_elements() - 1; i++)
	{
		figures[i]->move(50, 50);
		vgetchar();
	}

	if (Object* object = dynamic_cast<Object*>(segment))
	{
		const char* who = object->who();

		vc << who;
		vgetchar();
		segment->move(20, 20);
		vgetchar();
	}

	return 0;
}
}