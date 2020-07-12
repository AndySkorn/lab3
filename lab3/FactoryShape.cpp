#include "stdafx.h"
#include "FactoryShape.h"


FactoryShape::FactoryShape(){}

Shape* FactoryShape::Generator() {
	srand(time(0));
	switch (rand() % 7) {
	case 0: {
		return new Square();                //�������
		break;
	}
	case 1: {
		return new Triangle();              //�����������
		break;
	}
	case 2:{
		return new Rectangl();             //�������������
		break;
	}
	case 3:{
		return new Parallelogram();         //��������������
		break;
	}
	case 4:{
		return new Trapeze();               //��������
		break;
}
	case 5:{
		return new Hexagon();               //�������������
		break;
	}
	case 6:{
		return new Octagon();               //��������������
		break;
	}
	break;
	}
}
FactoryShape::~FactoryShape()
{
}
