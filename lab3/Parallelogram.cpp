#include "stdafx.h"
#include "Parallelogram.h"


Parallelogram::Parallelogram(){
	ID = 'P';	
	angle_shape = 4;
}

void Parallelogram::CreateShape() {
	return;
//	arry = new Point[angle_shape];
//	for (int i = 0; i < angle_shape; i++) {
//		cout << "Введите координату x[" << i << "] "; cin >> arry[i].x;
//		cout << "Введите координату y[" << i << "] "; cin >> arry[i].y;
//	}
//	side = new double[2];
//side[0] = sqrt(pow((arry[0].x - arry[1].x), 2) + pow((arry[0].y - arry[1].y), 2)); //расчет первой стороны прямоугольника
//side[1] = sqrt(pow((arry[1].x - arry[2].x), 2) + pow((arry[1].y - arry[2].y), 2)); //расчет второй стороны прямоугольника
//
//perimetr = 2 * (side[0] + side[1]); //расчет периметра прямоугольника
//
//h = sqrt((pow((arry[0].y - arry[3].y), 2)));
//ploshad = side[0] * side[2]; // расчет площади прямоугольника
//
//centr_g.x = sqrt(pow((arry[0].x - arry[2].x), 2)) / 2; // расчет координаты "х" центра тяжести прямоугольника
//centr_g.y = sqrt(pow((arry[0].y - arry[2].y), 2)) / 2; // расчет координаты "у" центра тяжести прямоугольника
}

void Parallelogram::PrintSide() {
	return;
	//cout.precision(2);//Количество точек после запятой
	//for (int i = 0; i < 2; i++)
	//	cout << endl << "Длина стороны параллелограма [" << i << "]=" << side[i] << endl;
}

void Parallelogram::PrintCord() {
	return;
	//cout.precision(2);//Количество точек после запятой
	//cout << "Значение периметра параллелограма: P= " << perimetr << endl;
}

void Parallelogram::PrintPer() {
	return;
	//cout.precision(2);//Количество точек после запятой
	//cout << "Значение периметра параллелограма: P= " << perimetr << endl;
}

void Parallelogram::PrintPlosh() {
	return;
	//cout.precision(2);//Количество точек после запятой
	//cout << "Значение площади параллелограма: S= " << ploshad << endl;
}

void Parallelogram::PrintCentr_G() {
	return;
	//cout.precision(2);//Количество точек после запятой
	//cout << "Координаты центра тяжести параллелограма:" << endl;
	//cout << "x=" << centr_g.x << endl;
	//cout << "y=" << centr_g.y << endl;
}

void Parallelogram::Rotate(double _angle) {
	return;
	/*angle = _angle;
	angle = (angle);
	cout << cos(angle) << " ";
	cout.precision(2);
	for (int i = 0; i < 4; i++)
	{
		arry[i].x = (arry[i].x*cos(angle) - arry[i].y*sin(angle));
		arry[i].y = (arry[i].x*sin(angle) + arry[i].y*cos(angle));
	}
	for (int i = 0; i < 4; i++) {
		cout << endl << "Координата х[" << i << "] ";
		cout << arry[i].x << endl;
		cout << "Координата у[" << i + 1 << "] ";
		cout << arry[i].y << endl;
	}*/
}

void Parallelogram::Move(Point _dop) {
	return;
	/*for (int i = 0; i < 2; i++) {
		arry[i].x += _dop.x;
		arry[i].y += _dop.y;
	}
	centr_g.x += _dop.x;
	centr_g.y += _dop.y;*/
}

Parallelogram::~Parallelogram(){
//	delete arry;
//	delete side;
}
