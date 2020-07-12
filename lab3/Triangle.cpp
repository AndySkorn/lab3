#include "stdafx.h"
#include "Triangle.h"


Triangle::Triangle() { 
	ID = 'T'; 
	angle_shape = 3;
}

void Triangle::CreateShape() {
	arry = new Point[angle_shape];
	for (int i = 0; i < angle_shape; i++) {
		cout << "Введите значение координаты x[" << i << "] "; cin >> arry[i].x;
		cout << "Введите значение координаты y[" << i << "] "; cin >> arry[i].y;
	}

	side = new double[3];
	side[0] = sqrt(pow((arry[0].x - arry[1].x), 2) + pow((arry[0].y - arry[1].y), 2)); //Расчет первой стороны треугольника
	side[1] = sqrt(pow((arry[1].x - arry[2].x), 2) + pow((arry[1].y - arry[2].y), 2)); //Расчет второй стороны треугольника
	side[2] = sqrt(pow((arry[0].x - arry[2].x), 2) + pow((arry[0].y - arry[2].y), 2)); //Расчет третьей стороны треугольника


	for (int i = 0; i < 3; i++) //Расчет периметра треугольника
		perimetr = perimetr + side[i];

	p = perimetr / 2; //Полупериметр треугольника
	ploshad = sqrt(p*(p - side[0])*(p - side[1])*(p - side[2])); //Расчет площади треугольника

	for (int i = 0; i < 3; i++) {
		centr_g.x += arry[i].x / 3;
		centr_g.y += arry[i].y / 3;
	}
}

void Triangle::PrintSide() {
//	cout.precision(2);//Количество точек после запятой
	for (int i = 0; i < 3; i++)
		cout << "Сторона треугольника [" << i+1 << "]= " << side[i] << endl;
}

void Triangle::PrintCord() {
	//	cout.precision(2);//Количество точек после запятой

	for (int i = 0; i < 3; i++) {
		cout << endl << "Координата х[" << i << "] ";
		cout << arry[i].x << endl;
		cout << "Координата у[" << i << "] ";
		cout << arry[i].y << endl;
	}
}

void Triangle::PrintPer() {
	//cout.precision(2);//Количество точек после запятой
	cout << "Значение периметра треугольника: P= " << perimetr << endl;
}

void Triangle::PrintPlosh() {
//	cout.precision(2);//Количество точек после запятой
	cout << "Значение площади треугольника: S= " << ploshad << endl;	
}

void Triangle::PrintCentr_G() {
//	cout.precision(2);//Количество точек после запятой
	cout << "Координаты центра тяжести треугольника равны:" << endl << "x0=" << centr_g.x << endl << "y0=" << centr_g.y << endl;
}

void Triangle::Rotate(double _angle) {
	angle = _angle;
	//cout.precision(2); //Количество точек после запятой
	for (int i = 0; i < 3; i++) {
		arry[i].x = (arry[i].x*cos(angle) - arry[i].y*sin(angle));
		arry[i].y = (arry[i].x*sin(angle) + arry[i].y*cos(angle));
	} 
	cout << "Новые значения координат вершин треугольника:" << endl;
	for(int i=0; i<3; i++){
		cout << endl << "Координата х[" << i << "] ";
		cout << arry[i].x << endl;
		cout << "Координата у[" << i + 1 << "] ";
		cout << arry[i].y << endl;
	}
}

void Triangle::Move(Point _dop) {

	for (int i = 0; i < 3; i++) {
		arry[i].x += _dop.x;
		arry[i].y += _dop.y;
	} 

	cout << "Нов5ые значения координат вершин треугольника:" << endl;
	for(int i = 0; i<3; i++) {
		cout << endl << "Координата х[" << i << "] ";
		cout << arry[i].x << endl;
		cout << "Координата у[" << i + 1 << "] ";
		cout << arry[i].y << endl;
	}

	centr_g.x = centr_g.x + _dop.x;
	centr_g.y = centr_g.y + _dop.y;

	cout << "Новые значения координат центра тяжести треугольника:" << endl;
	cout << "x0= " << centr_g.x << endl;
	cout << "y0= " << centr_g.y << endl;
}

Triangle::~Triangle(){
	delete arry;
	delete side;
}
