#include "stdafx.h"
#include "Rectangl.h"


Rectangl::Rectangl(){
	ID ='R';
	angle_shape = 4;
}

void Rectangl::CreateShape() {
	return;
	//arry = new Point[angle_shape];
	//for (int i = 0; i < angle_shape; i++) {
	//	cout << "Введите координату x[" << i << "] "; cin >> arry[i].x;
	//	cout << "Введите координату y[" << i << "] "; cin >> arry[i].y;
	//}
	//side[0] = abs(arry[0].x - arry[1].x); //Расчет первой стороны прямоугольника
	//side[1] = abs(arry[1].y - arry[2].y); //Расчет второй стороны прямоугольника


	//perimetr = 2 * (side[0] + side[1]); //Расчет периметра прямоугольника
	//ploshad = side[0] * side[1]; // Расчет площади прямоугольника

	//centr_g.x = sqrt(pow((arry[0].x - arry[2].x), 2)) / 2; // Расчет координаты "х" центра тяжести прямоугольника
	//centr_g.y = sqrt(pow((arry[0].y - arry[2].y), 2)) / 2; // Расчет координаты "у" центра тяжести прямоугольника
}

void Rectangl::PrintSide() {
	return;
	//cout.precision(2);//Количество точек после запятой
	//
	//cout << endl << "Длина прямоугольника равна: " << side[0] << endl;
	//cout << "Ширина прямоугольника равна: " << side[1] << endl;
	
}

void Rectangl::PrintCord() {
	return;
	//cout.precision(2);//Количество точек после запятой
	//cout << "Значение периметра прямоугольника: P= " << perimetr << endl;
}

void Rectangl::PrintPer() {
	return;
	//cout.precision(2);//Количество точек после запятой
	//cout << "Значение периметра прямоугольника: P= " << perimetr << endl;
}

void Rectangl::PrintPlosh() {
	return;
	//cout.precision(2);//Количество точек после запятой
	//cout << "Значение площади прямоугольника: S= " << ploshad << endl;
}

void Rectangl::PrintCentr_G() {
	return;
	//cout.precision(2);//Количество точек после запятой
	//cout << "Координаты центра тяжести квадрата:" << endl;
	//cout << "x=" << centr_g.x << endl;
	//cout << "y=" << centr_g.y << endl;
}

void Rectangl::Rotate(double _angle) {
	return;
	//angle = _angle;
	//cout.precision(2); //Количество точек после запятой
	//for (int i = 0; i < 4; i++) {
	//	arry[i].x = (arry[i].x*cos(angle) - arry[i].y*sin(angle));
	//	arry[i].y = (arry[i].x*sin(angle) + arry[i].y*cos(angle));

	//	cout << endl << "Координата х[" << i << "] ";
	//	cout << arry[i].x << endl;
	//	cout << "Координата у[" << i + 1 << "] ";
	//	cout << arry[i].y << endl;
	//}
}

void Rectangl::Move(Point _dop) {
	return;
	/*for (int i = 0; i < 2; i++) {
		arry[i].x += _dop.x;
		arry[i].y += _dop.y;
	}*/
}

Rectangl::~Rectangl(){
	//delete arry;
	//delete side;
}
