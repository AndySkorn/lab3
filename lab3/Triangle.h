#pragma once
#include "Shape.h"
class Triangle :
	public Shape
{
private:
	double t; // Вспомогательная переменная
	double h;  // Высота треугольника
	double p; // Вспомогательная переменная
	

public:
	Triangle();
	void PrintSide(); // Метод вывода на экран длин сторон
	void PrintCord(); // Метод вывода на экран длин сторон
	void PrintPer();// Метод вывода на экран периметра
	void PrintPlosh(); // Метод ввывода на экран площади
	void PrintCentr_G(); // Метод вывода на экран координат центра тяжести
	void CreateShape();
	void Rotate(double _angle); // Метод вращения фигуры
	void Move(Point _dop); // Метод перемещения фигуры
	~Triangle();
};

