#pragma once
#include "Shape.h"
class Parallelogram :
	public Shape
{
private:
	//float side[4];
	float h; // Высота параллелограмма

public:
	Parallelogram();
	void PrintSide(); // Метод вывода на экран длин сторон
	void PrintCord(); // Метод вывода на экран длин сторон
	void PrintPer();// Метод вывода на экран периметра
	void PrintPlosh(); // Метод ввывода на экран площади
	void PrintCentr_G(); // Метод вывода на экран координат центра тяжести
	void CreateShape();
	void Rotate(double _angle); // Метод возвращения периметра
	void Move(Point _dop); // Метод возвращения периметра
	~Parallelogram();
};

