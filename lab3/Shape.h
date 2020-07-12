#pragma once
#include <iostream>
#include <cmath>
#include <algorithm>
#include "Header1.h"

using namespace std;

class Shape
{
public:

	int angle_shape = 0;
	Point *arry; // ������ ����� ������
	double *side; // ������ ������ ������
	Point centr_g; // �������� ������ ������� ������
	double perimetr = 0; // �������� ��������� ������
	double angle; //�������� ���� ��������
	Point dop; // ��������������� ����������
	double ploshad = 0; // �������� ������� ������ 
	char ID; // ID ������
	
	Shape();
	virtual void CreateShape() = 0; // ����� �������� ������
	virtual void Rotate(double _angle) = 0; // ����� �������� ������
	virtual void Move(Point _dop) = 0; // ����� ����������� ������
	virtual void PrintCord() = 0; //����� ������ �� ����� ��������� ������
	virtual void PrintSide() = 0; //����� ������ �� ����� ����� �����������
	virtual void PrintPer() = 0; // ����� ������ �� ����� ���������
	virtual void PrintPlosh() = 0; // ����� ������ �� ����� �������
	virtual void PrintCentr_G() = 0; // ����� ������ �� ����� ��������� ������ �������
	

	virtual ~Shape();
};

