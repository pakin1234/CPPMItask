#include <time.h>
#include "vstub.h"
#include "Line.h"
#include "Arc.h"
#include "basepoint.h"
#include "Vect.h"
#include "Sector.h"

// draw(true) - paint figure
// draw(false) - delete figure

namespace std{

int main(void){
	int center_x = 150;   // Координаты центра дуги
	int center_y = 200;
	int radius = 50;      // Радиус дуги
	float startAngle = 0; // Начальный угол
	float sweepAngle = 90; // Угол дуги
	int x1 = 100;         // Концы линии
	int y1 = 250;
	int x2 = 200;
	int y2 = 250;
	int objectNumber = 1; // Номер объекта
	int x0 = 0;           // Начальные координаты для BasePoint
	int y0 = 0;
	int r = 255;          // Цвет (RGB)
	int g = 0;
	int b = 0;

	// Создаем объект сектора
	Sector sector(x1, y1, x2, y2, center_x, center_y, radius, startAngle, sweepAngle, x0, y0, r, g, b);

	// Рисуем сектор
	sector.draw(true); // Передаем true для рисования

	// Перемещаем сектор
	sector.move(10, 20); // Сдвигаем сектор на (10, 20)

	//drawgrid();
	//
	//int x0 = 1;
	//int y0 = 2;

	//Line line1(100, 200, 300, 400, x0, y0, 255, 255, 0);
	//Arca arc1(100, 200, 20, 0, 10, x0, y0, 255, 150, 0);

	//

	//Vector<BasePoint*> figure;
	//figure.push_back(&arc1);
	//figure.push_back(&line1);

	//for (size_t i = 0; i < figure.get_number_elements(); i++)
	//{
	//	figure[i]->draw(true);
	//	vgetchar();
	//}


	//for (size_t i = 0; i < figure.get_number_elements(); i++)
	//{
	//	figure[i]->move(4, 100);
	//	vgetchar();
	//}

	//vgetchar();
	//return 0;
}
}



/*
	высчитывать координаты не от точки 00, а от точки привящзки для нескольких фигур, соединенных в более сложную
	создать абстрактный класс с чистой виртуальной функцией (virtual draw() = 0)
	написать программу 3 файла, и 6 файлов для 3 классов(.сpp и .h) пример уже как был в файле скинутом
	+ дополнительно Можно ли
	1) Создавать
	2) Рисовать
	3) Уничтожать (разрушать в памяти)
	не зная их настоящий тип
	Если можно, то написть примеры в коде
*/