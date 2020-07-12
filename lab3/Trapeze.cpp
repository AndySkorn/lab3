#include "stdafx.h"
#include "Trapeze.h"


Trapeze::Trapeze() {
	ID = 'Z'; 
	angle_shape = 4;
}

void Trapeze::CreateShape() {

	arry = new Point[angle_shape];
	for (int i = 0; i < angle_shape; i++) {
		cout << "Введите координачты x[" << i << "] "; cin >> arry[i].x;
		cout << "Введите координачты y[" << i << "] "; cin >> arry[i].y;
	}

	side = new double[4];
	side[0] = sqrt(pow((arry[0].x - arry[1].x), 2) + pow((arry[0].y - arry[1].y), 2)); //Расчет верхнего основания трапеции
	side[1] = sqrt(pow((arry[1].x - arry[2].x), 2) + pow((arry[1].y - arry[2].y), 2)); //Расчет второй стороны трапеции
	side[2] = sqrt(pow((arry[2].x - arry[3].x), 2) + pow((arry[2].y - arry[3].y), 2)); //Расчет нижнего основания трапеции
	side[3] = sqrt(pow((arry[0].x - arry[3].x), 2) + pow((arry[0].y - arry[3].y), 2)); //Расчет четвёртой стороны трапеции

	perimetr = side[0] + side[1] + side[2] + side[3]; //Расчет периметра трапеции

	h = sqrt(pow((arry[0].y - arry[3].y), 2)); //Расчет высоты трапеции 
	ploshad = (side[0] + side[2])*h / 2; //Расчет площади трапеции 

	side_dop = sqrt(pow((arry[1].x - arry[3].x), 2) + pow((arry[1].y - arry[3].y), 2)); // Рассчет длины диагонали трапеции 
	p = (side[0] + side[3] + side_dop) / 2; // расчет полупериметра

	array_ploshad[0] = sqrt(p*(p - side[0])*(p - side[3])*(p - side_dop)); // Рассчет площади первого дополнительного треугольника 

	dop_arry[0].x = (arry[0].x + arry[1].x + arry[3].x) / 3;
	dop_arry[0].y = (arry[0].y + arry[1].y + arry[3].y) / 3;

	p = (side[0] + side[3] + side_dop) / 2; // Рассчет полупериметра

	array_ploshad[1] = sqrt(p*(p - side[1])*(p - side[2])*(p - side_dop));

	dop_arry[1].x = (arry[1].x + arry[2].x + arry[3].x) / 3;
	dop_arry[1].y = (arry[1].y + arry[2].y + arry[3].y) / 3;

	centr_g.x = (array_ploshad[0] * dop_arry[0].x + array_ploshad[1] * dop_arry[1].x) / ploshad;
	centr_g.y = (array_ploshad[0] * dop_arry[0].y + array_ploshad[1] * dop_arry[1].y) / ploshad;
}

void Trapeze::PrintSide() {
//	cout.precision(2);//Количество точек после запятой
	cout << endl << "Длина верхнего основания: " << side[0] << endl;
	cout << "Длина нижнего основания: " << side[2] << endl;
	if (side[3] == side[1]) {
		cout << "Так как трапеция равнобедренная, то боковые стороны равны." << endl;
		cout << "Длина боковой стороны основания: " << side[3] << endl;
	}
	else {
		cout << "Длина левой боковой стороны трапеции: " << side[3] << endl;
		cout << "Длина правой боковой стороны трпеции: " << side[1] << endl;
	}
}

void Trapeze::PrintCord() {
	//cout.precision(2);//Количество точек после запятой
	for (int i = 0; i < 4; i++) {
		cout << "x[" << i << "] = " << arry[i].x << endl;
		cout << "y[" << i << "] = " << arry[i].y << endl;
	}
}

void Trapeze::PrintPer() {
//	cout.precision(2);//Количество точек после запятой
	cout << "Значение периметра трапеции: P= " << perimetr << endl;
}

void Trapeze::PrintPlosh() {
//	cout.precision(2);//Количество точек после запятой
	cout << "Значение площади трапеции: S= " << ploshad << endl;
}

void Trapeze::PrintCentr_G() {
//	cout.precision(2);//Количество точек после запятой
	cout << "Координаты центра тяжести трапеции равны: x0= " << centr_g.x <<endl<< "y0= " << centr_g.y << endl;
}

void Trapeze::Rotate(double _angle) {

	angle = _angle;
	for (int i = 0; i < 4; i++) {
		arry[i].x = (arry[i].x*cos(angle) - arry[i].y*sin(angle));
		arry[i].y = (arry[i].x*sin(angle) + arry[i].y*cos(angle));
	}
	cout << "Новые координаты вершин трапеции равны: ";
	for (int i = 0; i < 4; i++) {
		cout << "x[" << i << "] = " << arry[i].x << endl;
		cout << "y[" << i << "] = " << arry[i].y << endl;
	}
}

void Trapeze::Move(Point _dop) {
	for (int i = 0; i < 4; i++) {
		arry[i].x += _dop.x;
		arry[i].y += _dop.y;
	}

	cout << "Новые координаты вершин трапеции: " << endl;
	for (int i = 0; i < 4; i++) {
		cout << "x[" << i << "] = " << arry[i].x << endl;
		cout << "y[" << i << "] = " << arry[i].y << endl;
	}
	centr_g.x += _dop.x;
	centr_g.y += _dop.y;
	cout << "Новые координаты центра тяжести трапеции: ";
	cout << "x0= " << centr_g.x << endl;
	cout << "y0= " << centr_g.y << endl;
}

Trapeze::~Trapeze()
{
	delete arry;
	delete side;
}
