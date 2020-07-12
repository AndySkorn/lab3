#include "stdafx.h"
#include "Square.h"


Square::Square(){
	ID = 'S';
	angle_shape = 4;
}

void Square::CreateShape() {
	return;
	//arry = new Point[angle_shape];
	//for (int i = 0; i < angle_shape; i++) {
	//	cout << "Введите координату x[" << i << "] "; cin >> arry[i].x;
	//	cout << "Введите координату y[" << i << "] "; cin >> arry[i].y;
	//}
	//side = new double[1];
	//side[0] = abs((arry[0].x - arry[1].x)); //Вычисление длины сторон квадрата

	//perimetr = 4 * side[0]; // Вычисление перриметра квадрата

	//ploshad = pow(side[0], 2); // Вычисление площади квадрата

	//centr_g.x = (arry[0].x + arry[2].x) / 2; // Вычисление координаты "x" центра тяжести квадрата
	//centr_g.y = (arry[0].y + arry[2].y) / 2; // Вычисление координаты "y" центра тяжести квадрата
}

void Square::PrintCord(){
	return;
	/*cout << "Координаты вершин квадрата: " << endl;

	for (int i = 0; i < 4; i++) {
		cout << "x[" << i << "] " << arry[i].x << endl;
		cout << "y[" << i << "] " << arry[i].y << endl;
	}*/
}

void Square::PrintSide() {
	return;
	//cout.precision(2);//Количество точек после запятой
	//cout << endl << "Длина стороны квадрата равна: " << side[0] << endl;
}

void Square::PrintPer() {
	return;
	//cout.precision(2);//Количество точек после запятой
	//cout << "Значение периметра квадрата: P= " << perimetr << endl;
}

void Square::PrintPlosh() {
	return;
	//cout.precision(2);//Количество точек после запятой
	//cout << "Значение площади квадрата: S= " << ploshad << endl;
}

void Square::PrintCentr_G() {
	return;
	//cout.precision(2);//Количество точек после запятой
	//cout << "Координаты центра тяжести квадрата:" << endl;
	//cout << "x=" << centr_g.x << endl;
	//cout << "y=" << centr_g.y << endl;
}

void Square::Rotate(double _angle) {
	return;
	//angle = _angle;
	//angle = (angle);
	//cout << cos(angle) << " ";
	//cout.precision(2);
	//for (int i = 0; i < 4; i++)
	//{
	//	arry[i].x = (arry[i].x*cos(angle) - arry[i].y*sin(angle));
	//	arry[i].y = (arry[i].x*sin(angle) + arry[i].y*cos(angle));
	//	
	//	cout << endl << "Координата х[" << i << "] ";
	//	cout << arry[i].x << endl;
	//	cout << "Координата у[" << i + 1 << "] ";
	//	cout << arry[i].y << endl;
	//}
}

void Square::Move(Point _dop) {
	return;
	/*for (int i = 0; i < 2; i++) {
		arry[i].x += _dop.x;
		arry[i].y += _dop.y;
	}*/
}

Square::~Square(){
//	delete arry;
//	delete side;
}
