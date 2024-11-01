#include <time.h>
#include "vstub.h"
#include "OLine.h"
#include "OArc.h"
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

	OLine line1(100, 200, 300, 400, x0, y0, 255, 150, 0);
	Sector sector(100, 200, 50, 0, 2, x0, y0, 255, 150, 0);
	BasePoint* segment = new Segment(200, 300, 50, 0, 2, x0, y0, 255, 150, 0);
	BasePoint* arc1 = new OArca(100, 200, 20, 0, 10, x0, y0, 255, 150, 0);

	
	BasePoint* line_not_object = new Line(150, 250, 350, 450, x0, y0, 255, 150, 0);

	Vector<BasePoint*> figures;
	figures.push_back(&line1);
	figures.push_back(&sector);
	figures.push_back(segment);
	figures.push_back(arc1);

	for (size_t i = 0; i < figures.get_number_elements(); i++)
	{
		figures[i]->draw(true);
		vgetchar();
	}

	for (size_t i = 0; i < figures.get_number_elements(); i++)
	{
		figures[i]->move(20, 20);
		vgetchar();
	}

	if (Object* object = dynamic_cast<Object*>(line_not_object)) {
		const char* who = object->who();
		int number = object->get_number();
		vc << who << " with number " << number << "\n";
		vgetchar();
	}
	else
	{
		vc << "Not an object" << "\n";
		vgetchar();
	}
	return 0;
}
}