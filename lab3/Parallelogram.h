#pragma once
#include "Shape.h"
class Parallelogram :
	public Shape
{
private:
	//float side[4];
	float h; // ������ ���������������

public:
	Parallelogram();
	void PrintSide(); // ����� ������ �� ����� ���� ������
	void PrintCord(); // ����� ������ �� ����� ���� ������
	void PrintPer();// ����� ������ �� ����� ���������
	void PrintPlosh(); // ����� ������� �� ����� �������
	void PrintCentr_G(); // ����� ������ �� ����� ��������� ������ �������
	void CreateShape();
	void Rotate(double _angle); // ����� ����������� ���������
	void Move(Point _dop); // ����� ����������� ���������
	~Parallelogram();
};

