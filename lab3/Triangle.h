#pragma once
#include "Shape.h"
class Triangle :
	public Shape
{
private:
	double t; // ��������������� ����������
	double h;  // ������ ������������
	double p; // ��������������� ����������
	

public:
	Triangle();
	void PrintSide(); // ����� ������ �� ����� ���� ������
	void PrintCord(); // ����� ������ �� ����� ���� ������
	void PrintPer();// ����� ������ �� ����� ���������
	void PrintPlosh(); // ����� ������� �� ����� �������
	void PrintCentr_G(); // ����� ������ �� ����� ��������� ������ �������
	void CreateShape();
	void Rotate(double _angle); // ����� �������� ������
	void Move(Point _dop); // ����� ����������� ������
	~Triangle();
};

