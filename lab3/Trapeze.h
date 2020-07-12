#pragma once
#include "Shape.h"
class Trapeze :
	public Shape
{
private:
	double p;
	double side_dop; // �������������� �������
	double array_ploshad[2]; // �������������� ������ ��������
	Point dop_arry[2];
	double h; // ������ ��������

public:
	Trapeze();
	void CreateShape();
	void PrintSide(); // ����� ������ �� ����� ���� ������
	void PrintCord(); // ����� ������ �� ����� ���� ������
	void PrintPer();// ����� ������ �� ����� ���������
	void PrintPlosh(); // ����� ������� �� ����� �������
	void PrintCentr_G(); // ����� ������ �� ����� ��������� ������ �������
	void Rotate(double _angle); // ����� ����������� ���������
	void Move(Point _dop); // ����� ����������� ���������
	~Trapeze();
};

