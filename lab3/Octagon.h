#pragma once
#include "Shape.h"
class Octagon :
	public Shape
{
protected:
	double d; 
public:
	Octagon();
	void PrintSide(); // ����� ������ �� ����� ���� ������
	void PrintCord(); // ����� ������ �� ����� ���� ������
	void PrintPer();// ����� ������ �� ����� ���������
	void PrintPlosh(); // ����� ������� �� ����� �������
	void PrintCentr_G(); // ����� ������ �� ����� ��������� ������ �������
	void CreateShape();
	void Rotate(double _angle); // ����� ����������� ���������
	void Move(Point _dop); // ����� ����������� ���������
	~Octagon();
};

