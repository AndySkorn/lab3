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
	Point *arry; // Массив точек фигуры
	double *side; // Массив сторон фигуры
	Point centr_g; // Значение центра тяжести фигуры
	double perimetr = 0; // Значение периметра фигуры
	double angle; //Значение угла поворота
	Point dop; // Вспомогательная переменная
	double ploshad = 0; // Значение площади фигуры 
	char ID; // ID фигуры
	
	Shape();
	virtual void CreateShape() = 0; // Метод создания фигуры
	virtual void Rotate(double _angle) = 0; // Метод поворота фигуры
	virtual void Move(Point _dop) = 0; // Метод перемещения фигуры
	virtual void PrintCord() = 0; //Метод вывода на экран координат фигуры
	virtual void PrintSide() = 0; //Метод вывода на экран длины сторонфигуы
	virtual void PrintPer() = 0; // Метод вывода на экран периметра
	virtual void PrintPlosh() = 0; // Метод вывода на экран площади
	virtual void PrintCentr_G() = 0; // Метод вывода на экран координат центра тяжести
	

	virtual ~Shape();
};

