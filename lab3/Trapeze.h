#pragma once
#include "Shape.h"
class Trapeze :
	public Shape
{
private:
	double p;
	double side_dop; // Дополнительная сторона
	double array_ploshad[2]; // Дополнительный массив площадей
	Point dop_arry[2];
	double h; // Высота трапеции

public:
	Trapeze();
	void CreateShape();
	void PrintSide(); // Метод вывода на экран длин сторон
	void PrintCord(); // Метод вывода на экран длин сторон
	void PrintPer();// Метод вывода на экран периметра
	void PrintPlosh(); // Метод ввывода на экран площади
	void PrintCentr_G(); // Метод вывода на экран координат центра тяжести
	void Rotate(double _angle); // Метод возвращения периметра
	void Move(Point _dop); // Метод возвращения периметра
	~Trapeze();
};

