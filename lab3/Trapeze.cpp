#include "stdafx.h"
#include "Trapeze.h"


Trapeze::Trapeze() {
	ID = 'Z'; 
	angle_shape = 4;
}

void Trapeze::CreateShape() {

	arry = new Point[angle_shape];
	for (int i = 0; i < angle_shape; i++) {
		cout << "������� ����������� x[" << i << "] "; cin >> arry[i].x;
		cout << "������� ����������� y[" << i << "] "; cin >> arry[i].y;
	}

	side = new double[4];
	side[0] = sqrt(pow((arry[0].x - arry[1].x), 2) + pow((arry[0].y - arry[1].y), 2)); //������ �������� ��������� ��������
	side[1] = sqrt(pow((arry[1].x - arry[2].x), 2) + pow((arry[1].y - arry[2].y), 2)); //������ ������ ������� ��������
	side[2] = sqrt(pow((arry[2].x - arry[3].x), 2) + pow((arry[2].y - arry[3].y), 2)); //������ ������� ��������� ��������
	side[3] = sqrt(pow((arry[0].x - arry[3].x), 2) + pow((arry[0].y - arry[3].y), 2)); //������ �������� ������� ��������

	perimetr = side[0] + side[1] + side[2] + side[3]; //������ ��������� ��������

	h = sqrt(pow((arry[0].y - arry[3].y), 2)); //������ ������ �������� 
	ploshad = (side[0] + side[2])*h / 2; //������ ������� �������� 

	side_dop = sqrt(pow((arry[1].x - arry[3].x), 2) + pow((arry[1].y - arry[3].y), 2)); // ������� ����� ��������� �������� 
	p = (side[0] + side[3] + side_dop) / 2; // ������ �������������

	array_ploshad[0] = sqrt(p*(p - side[0])*(p - side[3])*(p - side_dop)); // ������� ������� ������� ��������������� ������������ 

	dop_arry[0].x = (arry[0].x + arry[1].x + arry[3].x) / 3;
	dop_arry[0].y = (arry[0].y + arry[1].y + arry[3].y) / 3;

	p = (side[0] + side[3] + side_dop) / 2; // ������� �������������

	array_ploshad[1] = sqrt(p*(p - side[1])*(p - side[2])*(p - side_dop));

	dop_arry[1].x = (arry[1].x + arry[2].x + arry[3].x) / 3;
	dop_arry[1].y = (arry[1].y + arry[2].y + arry[3].y) / 3;

	centr_g.x = (array_ploshad[0] * dop_arry[0].x + array_ploshad[1] * dop_arry[1].x) / ploshad;
	centr_g.y = (array_ploshad[0] * dop_arry[0].y + array_ploshad[1] * dop_arry[1].y) / ploshad;
}

void Trapeze::PrintSide() {
//	cout.precision(2);//���������� ����� ����� �������
	cout << endl << "����� �������� ���������: " << side[0] << endl;
	cout << "����� ������� ���������: " << side[2] << endl;
	if (side[3] == side[1]) {
		cout << "��� ��� �������� ��������������, �� ������� ������� �����." << endl;
		cout << "����� ������� ������� ���������: " << side[3] << endl;
	}
	else {
		cout << "����� ����� ������� ������� ��������: " << side[3] << endl;
		cout << "����� ������ ������� ������� �������: " << side[1] << endl;
	}
}

void Trapeze::PrintCord() {
	//cout.precision(2);//���������� ����� ����� �������
	for (int i = 0; i < 4; i++) {
		cout << "x[" << i << "] = " << arry[i].x << endl;
		cout << "y[" << i << "] = " << arry[i].y << endl;
	}
}

void Trapeze::PrintPer() {
//	cout.precision(2);//���������� ����� ����� �������
	cout << "�������� ��������� ��������: P= " << perimetr << endl;
}

void Trapeze::PrintPlosh() {
//	cout.precision(2);//���������� ����� ����� �������
	cout << "�������� ������� ��������: S= " << ploshad << endl;
}

void Trapeze::PrintCentr_G() {
//	cout.precision(2);//���������� ����� ����� �������
	cout << "���������� ������ ������� �������� �����: x0= " << centr_g.x <<endl<< "y0= " << centr_g.y << endl;
}

void Trapeze::Rotate(double _angle) {

	angle = _angle;
	for (int i = 0; i < 4; i++) {
		arry[i].x = (arry[i].x*cos(angle) - arry[i].y*sin(angle));
		arry[i].y = (arry[i].x*sin(angle) + arry[i].y*cos(angle));
	}
	cout << "����� ���������� ������ �������� �����: ";
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

	cout << "����� ���������� ������ ��������: " << endl;
	for (int i = 0; i < 4; i++) {
		cout << "x[" << i << "] = " << arry[i].x << endl;
		cout << "y[" << i << "] = " << arry[i].y << endl;
	}
	centr_g.x += _dop.x;
	centr_g.y += _dop.y;
	cout << "����� ���������� ������ ������� ��������: ";
	cout << "x0= " << centr_g.x << endl;
	cout << "y0= " << centr_g.y << endl;
}

Trapeze::~Trapeze()
{
	delete arry;
	delete side;
}
