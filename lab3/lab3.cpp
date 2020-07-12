// lab3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include "Shape.h"
#include "Operation.h"
#include "FactoryShape.h"
#include "Header1.h"
#include "Hexagon.h"
#include "Octagon.h"
#include "Parallelogram.h"
#include "Rectangl.h"
#include "Square.h"
#include "Trapeze.h"
#include "Triangle.h"

int main() {

	setlocale(LC_ALL, "Rus");           //������ ��� ������ �� ������� �����
	const double Rad = 0.017;
	Shape *p1 = 0, *p2 = 0;
	FactoryShape f;

	cout << "�������� ������ ������:" << endl;
	char cond = 'y';
	while (cond == 'Y' || cond == 'y')
	{
		if (p1) delete p1;
		p1 = f.Generator();
		cout << p1->ID << endl;
		cout << "��� ����������� ������ ������ ������� \"y \"" << endl; cin >> cond;
	}

	p1->CreateShape();

	cout << "�������� ������ ������:" << endl;
	cond = p1->ID;
	if (cond == 'T')
		while (cond != 'Z')
		{
			if (p2) delete p2;
			p2 = f.Generator();
			cout << p2->ID << endl;
			cond = p2->ID;
		}
	else
		while (cond != 'T')
		{
			if (p2) delete p2;
			p2 = f.Generator();
			cout << p2->ID << endl;
			cond = p2->ID;
		}

	p2->CreateShape();

	int key_menu_1 = 0;
	while (key_menu_1 != 100) {
		Operation op(p1, p2);
		cout << "�������� ��������:" << endl;
		cout << "������� \"0\" ����� ������� ������ 1;" << endl;
		cout << "������� \"1\" ����� ������� ������ 2;" << endl;
		cout << "������� \"2\" ����� �������� ������� �����;" << endl;
		cout << "������� \"3\" ����� ��������� ����������� ������ 1 � ������ 2;" << endl;
		cout << "������� \"4\" ����� ��������� ��������� ������ 1 � ������ 2 ��� ������ 2 � ������ 1;" << endl;
		cout << "������� \"100\" ����� ����� �� ���������." << endl;
		cin >> key_menu_1;
		switch (key_menu_1) { // �������� ����
		case 0: {
			int key_menu_shape_1 = 0;
			while (key_menu_shape_1 != 100) {
				cout << "�������� ��������:" << endl;
				cout << "������� \"0\" ����� ������� �� ����� �������������� ������ 1;" << endl;
				cout << "������� \"1\" ����� ��������� ������ 1;" << endl;
				cout << "������� \"2\" ����� ����������� ������ 1;" << endl;
				cout << "������� \"100\" ����� ����� �� ���������." << endl;
				cin >> key_menu_shape_1;
				switch (key_menu_shape_1) { // ���� ������ � ������� 1
				case 0: {
					p1->PrintCord();
					p1->PrintPlosh();
					p1->PrintPer();
					p1->PrintSide();
					p1->PrintCentr_G();
					break;
				}
				case 1: {
					double angle;
					cin >> angle;
					angle *= Rad;
					p1->Rotate(angle);
					break;
				}
				case 2: {
					Point move;
					cout << "������� ��������, �� ������� ���������� ����������� ������ �� ��� Ox: " << endl << "x= "; cin >> move.x; cout << endl;
					cout << "������� ��������, �� ������� ���������� ����������� ������ �� ��� Oy: " << endl << "y= "; cin >> move.y; cout << endl;
					p1->Move(move);
					break;
				}
						break;
				}
			}
			cin >> key_menu_1;
			break;
		}
		case 1: {

			int key_menu_shape_2 = 0;
			while (key_menu_shape_2 != 100) {
				cout << "�������� ��������:" << endl;
				cout << "������� \"0\" ����� ������� �� ����� �������������� ������ 2;" << endl;
				cout << "������� \"1\" ����� ��������� ������ 2;" << endl;
				cout << "������� \"2\" ����� ����������� ������ 2;" << endl;
				cout << "������� \"100\" ����� ����� �� ���������." << endl;
				cin >> key_menu_shape_2;
				switch (key_menu_shape_2) { // ���� ������ � ������� 1
				case 0: {
					p2->PrintCord();
					p2->PrintPlosh();
					p2->PrintPer();
					p2->PrintSide();
					p2->PrintCentr_G();
					break;
				}
				case 1: {
					double angle;
					cin >> angle;
					angle *= Rad;
					p2->Rotate(angle);
					break;
				}
				case 2: {
					Point move;
					cout << "������� ��������, �� ������� ���������� ����������� ������ �� ��� Ox: " << endl << "x= "; cin >> move.x; cout << endl;
					cout << "������� ��������, �� ������� ���������� ����������� ������ �� ��� Oy: " << endl << "y= "; cin >> move.y; cout << endl;
					p2->Move(move);
					break;
				}
						break;
				}
			}
			break;
		}
		case 2: {
			op.Compare();
			break;
			
		}
		case 3: {
			op.IsIntersect_t_z();
			op.IsIntersect_z_t();
			break;
		}
		case 4: {
			op.IsInclude_t_v_z();
			op.IsInclude_z_v_t();
			break;
		}
				cin >> key_menu_1;
				break;
		}
	}

	
	delete p1;
	delete p2;
	return 0;
}

