#pragma once
#include "Shape.h"
class Hexagon :
	public Shape
{
private: 
	//float side[6];
	
	double d;
public:
	Hexagon();
	void PrintSide(); // ����� ������ �� ����� ���� ������
	void PrintCord(); // ����� ������ �� ����� ���� ������
	void PrintPer();// ����� ������ �� ����� ���������
	void PrintPlosh(); // ����� ������� �� ����� �������
	void PrintCentr_G(); // ����� ������ �� ����� ��������� ������ �������
	void CreateShape();
	void Rotate(double _angle); // ����� ����������� ���������
	void Move(Point _dop); // ����� ����������� ���������
	~Hexagon();
};

