#include "stdafx.h"
#include "Hexagon.h"


Hexagon::Hexagon(){
	ID = 'H';	
	angle_shape = 6;
}

void Hexagon::CreateShape() {
	return;
	// arry = new Point[angle_shape];
	//for (int i = 0; i < angle_shape; i++) {
	//	cout << "Введите координату шесстиугольника x[" << i << "] "; cin >> arry[i].x;
	//	cout << "Введите координату шесстиугольника y[" << i << "] "; cin >> arry[i].y;
	//}
	//side = new double[1];
	//side[0] = sqrt(pow((arry[0].x - arry[1].x), 2) + pow((arry[0].y - arry[1].y), 2)); //Расчет первой стороны шестиугольника

	//perimetr = side[0] * 6; //Расчет периметра шестиугольника

	//centr_g.x = (arry[0].x + arry[3].x) / 2;
	//centr_g.y = (arry[0].y + arry[3].y) / 2;

	//d = sqrt(pow((arry[0].x - centr_g.x), 2) + pow((arry[0].y - centr_g.y), 2));
	//ploshad = perimetr*d; //Расчет площади трапеции 

}

void Hexagon::PrintSide() {
	return;
	//cout.precision(2);//Количество точек после запятой
	//cout << endl << "Длина сторон правильногошестиугольника: " << side[0] << endl;
}

void Hexagon::PrintCord() {
	return;
	//cout.precision(2);//Количество точек после запятой
	//cout << "Значение периметра шестиугольника: P= " << perimetr << endl;
}

void Hexagon::PrintPer() {
	return;
	//cout.precision(2);//Количество точек после запятой
	//cout << "Значение периметра шестиугольника: P= " << perimetr << endl;
}

void Hexagon::PrintPlosh() {
	return;
	//cout.precision(2);//Количество точек после запятой
	//cout << "Значение площади шестиугольника: S= " << ploshad << endl;
}

void Hexagon::PrintCentr_G() {
	return;
//	cout.precision(2);//Количество точек после запятой
//	cout << "Координаты центра тяжести шестиугольника равны:" << endl << "x0=" << centr_g.x << endl << "y0=" << centr_g.y << endl;
}

void Hexagon::Rotate(double _angle) {
	return;
	/*angle = _angle;
	angle = (angle);
	cout << cos(angle) << " ";
	cout.precision(2);
	for (int i = 0; i < 6; i++)
	{
		arry[i].x = (arry[i].x*cos(angle) - arry[i].y*sin(angle));
		arry[i].y = (arry[i].x*sin(angle) + arry[i].y*cos(angle));
	}
	for (int i = 0; i < 6; i++)
	{
		cout << endl << "Новыые координаты фигуры:";
		cout << endl << "Координата х[" << i << "] ";
		cout << arry[i].x << endl;
		cout << "Координата у[" << i + 1 << "] ";
		cout << arry[i].y << endl;
	}
*/
}

void Hexagon::Move(Point _dop) {
	return;
	/*for (int i = 0; i < 6; i++) {
		arry[i].x += _dop.x;
		arry[i].y += _dop.y;
	}
	centr_g.x += _dop.x;
	centr_g.y += _dop.y;*/
}

Hexagon::~Hexagon(){
	//delete arry;
	//delete side;
}
