#include "stdafx.h"
#include "Octagon.h"


Octagon::Octagon(){
	ID = 'O';
	angle_shape = 8;
}

void Octagon::CreateShape() {
	return;
	//arry = new Point[angle_shape];
	//for (int i = 0; i < angle_shape; i++) {
	//	cout << "������� ���������� ��������������� x[" << i << "] "; cin >> arry[i].x;
	//	cout << "������� ���������� ��������������� y[" << i << "] "; cin >> arry[i].y;
	//}
	//side = new double[1];
	//side[0] = sqrt(pow((arry[0].x - arry[1].x), 2) + pow((arry[0].y - arry[1].y), 2)); //������ ������ ������� ��������������

	//perimetr = side[0] * 8; //������ ��������� ��������������

	//centr_g.x = (arry[0].x + arry[4].x) / 2;
	//centr_g.y = (arry[0].y + arry[4].y) / 2;

	//d = sqrt(pow((arry[0].x - centr_g.x), 2) + pow((arry[0].y - centr_g.y), 2));
	//ploshad = perimetr*d; //������ ������� ��������������� 

}

void Octagon::PrintSide() {
	return;
	//cout.precision(2);//���������� ����� ����� �������
	//cout << endl << "����� ������ ����������� ���������������: " << side[0] << endl;
}

void Octagon::PrintCord() {
	return;
	//cout.precision(2);//���������� ����� ����� �������
	//cout << "���������� ������ ����������� ��������������� " << endl;
	//for (int i = 0; i < 8; i++) {
	//	cout << "x[" << i << "] " << arry[i].x << endl;
	//	cout << "y[" << i << "] " << arry[i].y << endl;
	//}
}

void Octagon::PrintPer() { 
	return;
	//cout.precision(2);//���������� ����� ����� �������
	//cout << "�������� ��������� ���������������: P= " << perimetr << endl;
}

void Octagon::PrintPlosh() {
	return;
	//cout.precision(2);//���������� ����� ����� �������
	//cout << "�������� ������� ���������������: S= " << ploshad << endl;
}

void Octagon::PrintCentr_G() {
	return;
	//cout.precision(2);//���������� ����� ����� �������
	//cout << "���������� ������ ������� ��������������� �����:" << endl << "x0=" << centr_g.x << endl << "y0=" << centr_g.y << endl;
}

void Octagon::Rotate(double _angle) {
	return;
	/*angle = _angle;
	angle = (angle);
	cout << cos(angle) << " ";
	cout.precision(2);
	for (int i = 0; i < 8; i++)
	{
		arry[i].x = (arry[i].x*cos(angle) - arry[i].y*sin(angle));
		arry[i].y = (arry[i].x*sin(angle) + arry[i].y*cos(angle));
	}
	for (int i = 0; i < 8; i++) {
		cout << endl << "���������� �[" << i << "] ";
		cout << arry[i].x << endl;
		cout << "���������� �[" << i + 1 << "] ";
		cout << arry[i].y << endl;
	}*/
}

void Octagon::Move(Point _dop) {
	return;
	/*for (int i = 0; i < 8; i++) {
		arry[i].x += _dop.x;
		arry[i].y += _dop.y;
	}*/
}

Octagon::~Octagon(){
	//delete arry;
	//delete side;
}
