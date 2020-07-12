#include "stdafx.h"
#include "FactoryShape.h"


FactoryShape::FactoryShape(){}

Shape* FactoryShape::Generator() {
	srand(time(0));
	switch (rand() % 7) {
	case 0: {
		return new Square();                //квадрат
		break;
	}
	case 1: {
		return new Triangle();              //треугольник
		break;
	}
	case 2:{
		return new Rectangl();             //прямоугольник
		break;
	}
	case 3:{
		return new Parallelogram();         //параллелограмм
		break;
	}
	case 4:{
		return new Trapeze();               //трапеция
		break;
}
	case 5:{
		return new Hexagon();               //шестиугольник
		break;
	}
	case 6:{
		return new Octagon();               //восьмиугольник
		break;
	}
	break;
	}
}
FactoryShape::~FactoryShape()
{
}
