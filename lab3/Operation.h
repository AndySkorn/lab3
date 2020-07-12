#pragma once
#include <iostream>
#include "Shape.h"
using namespace std;

class Operation
{
private:
	Shape *_s1, *_s2;
	Point *arry_shape_1, *arry_shape_2; // массив точек фигур
	Point *a, *b;
	int amount_angle_1, amount_angle_2; // количество углов фигур
	
	int intersections_num = 0;
	int prev = 4 - 1;

public:
	Operation(Shape* s1, Shape* s2); 
	void Compare(); // Метода сравнения площадей
	bool IsIntersect_t_z(); // Метод проверки пересечения треугольника трапецией
	bool IsIntersect_z_t(); // Метод проверки пересечения трапеции треугольником
	bool IsInclude_t_v_z(); // Метод проверки включения треугольника в траппецию
	bool IsInclude_z_v_t(); // Метод проверки включения  трапеции в треугольник

	
 ~Operation();
};

