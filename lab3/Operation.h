#pragma once
#include <iostream>
#include "Shape.h"
using namespace std;

class Operation
{
private:
	Shape *_s1, *_s2;
	Point *arry_shape_1, *arry_shape_2; // ������ ����� �����
	Point *a, *b;
	int amount_angle_1, amount_angle_2; // ���������� ����� �����
	
	int intersections_num = 0;
	int prev = 4 - 1;

public:
	Operation(Shape* s1, Shape* s2); 
	void Compare(); // ������ ��������� ��������
	bool IsIntersect_t_z(); // ����� �������� ����������� ������������ ���������
	bool IsIntersect_z_t(); // ����� �������� ����������� �������� �������������
	bool IsInclude_t_v_z(); // ����� �������� ��������� ������������ � ���������
	bool IsInclude_z_v_t(); // ����� �������� ���������  �������� � �����������

	
 ~Operation();
};

