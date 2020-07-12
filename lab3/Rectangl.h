#pragma once
#include "Shape.h"
class Rectangl :
	public Shape
{
private:
	float side[2];	
		
public:
	Rectangl();
	void PrintSide(); // ����� ������ �� ����� ���� ������
	void PrintCord(); // ����� ������ �� ����� ���� ������
	void PrintPer();// ����� ������ �� ����� ���������
	void PrintPlosh(); // ����� ������� �� ����� �������
	void PrintCentr_G(); // ����� ������ �� ����� ��������� ������ �������
	void CreateShape();
	void Rotate(double _angle); // ����� ����������� ���������
	void Move(Point _dop); // ����� ����������� ���������
	~Rectangl();
};

