#include <time.h>
#include "vstub.h"

namespace std{

int main(void){
    time_t t=clock();
  drawgrid();
  vc<< "Hello!\n";

  setcolor (255,255,255);
	for (int i=0; i<400; i++) 
	{
		putpixel(i, 400-i);
	}
  vgetchar();

  setcolor (0,255,255);
	putline (0,0,400,400);
  vc << "The time is: " << 123.456 << " and\nthis\n is\n  it!";
  vgetchar();

  setcolor (255,0,255);
  putarc (100,100,50,1.5,2.5);
  vgetchar();

  setcolor (0,0,0);
  putarc (100,100,50,1.5,2.5);
  vgetchar();

  setcolor (255,0,255);
  putarc (120,120,50,1.5,2.5);
  vc << "\nTime diff is : " << clock()-t;
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