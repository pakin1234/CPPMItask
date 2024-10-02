#include <time.h>
#include "vstub.h"
#include "Line.h"
#include "Arc.h"
#include "basepoint.h"
#include "Vect.h"

// draw(true) - paint figure
// draw(false) - delete figure

namespace std{

int main(void){
	drawgrid();
	
	int x0 = 1;
	int y0 = 2;

	Line line1(100, 200, 300, 400, x0, y0, 255, 255, 0);
	Arca arc1(100, 200, 20, 0, 10, x0, y0, 255, 150, 0);

	

	Vector<BasePoint*> figure;
	figure.push_back(&arc1);
	figure.push_back(&line1);

	for (size_t i = 0; i < figure.get_number_elements(); i++)
	{
		figure[i]->draw(true);
		vgetchar();
	}


	for (size_t i = 0; i < figure.get_number_elements(); i++)
	{
		figure[i]->move(4, 100);
		vgetchar();
	}

	vgetchar();
	return 0;
}
}



/*
	����������� ���������� �� �� ����� 00, � �� ����� ��������� ��� ���������� �����, ����������� � ����� �������
	������� ����������� ����� � ������ ����������� �������� (virtual draw() = 0)
	�������� ��������� 3 �����, � 6 ������ ��� 3 �������(.�pp � .h) ������ ��� ��� ��� � ����� ��������
	+ ������������� ����� ��
	1) ���������
	2) ��������
	3) ���������� (��������� � ������)
	�� ���� �� ��������� ���
	���� �����, �� ������� ������� � ����
*/