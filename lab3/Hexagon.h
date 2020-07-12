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
	void PrintSide(); // Метод вывода на экран длин сторон
	void PrintCord(); // Метод вывода на экран длин сторон
	void PrintPer();// Метод вывода на экран периметра
	void PrintPlosh(); // Метод ввывода на экран площади
	void PrintCentr_G(); // Метод вывода на экран координат центра тяжести
	void CreateShape();
	void Rotate(double _angle); // Метод возвращения периметра
	void Move(Point _dop); // Метод возвращения периметра
	~Hexagon();
};

