// lab3.cpp: определяет точку входа для консольного приложения.
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

	setlocale(LC_ALL, "Rus");           //локаль для вывода на русском языке
	const double Rad = 0.017;
	Shape *p1 = 0, *p2 = 0;
	FactoryShape f;

	cout << "Создание первой фигуры:" << endl;
	char cond = 'y';
	while (cond == 'Y' || cond == 'y')
	{
		if (p1) delete p1;
		p1 = f.Generator();
		cout << p1->ID << endl;
		cout << "Для продолжения выбора фигуры нажмите \"y \"" << endl; cin >> cond;
	}

	p1->CreateShape();

	cout << "Создание второй фигуры:" << endl;
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
		cout << "Выберите действие:" << endl;
		cout << "Введиет \"0\" чтобы выбрать фигуру 1;" << endl;
		cout << "Введиет \"1\" чтобы выбрать фигуру 2;" << endl;
		cout << "Введиет \"2\" чтобы сравнить площади фигур;" << endl;
		cout << "Введиет \"3\" чтобы проверить пересечение фигуры 1 и фигуры 2;" << endl;
		cout << "Введиет \"4\" чтобы проверить включение фигуры 1 в фигуру 2 или фигуры 2 в фигуру 1;" << endl;
		cout << "Введиет \"100\" чтобы выйти из программы." << endl;
		cin >> key_menu_1;
		switch (key_menu_1) { // Основное меню
		case 0: {
			int key_menu_shape_1 = 0;
			while (key_menu_shape_1 != 100) {
				cout << "Выберите действие:" << endl;
				cout << "Введиет \"0\" чтобы вывести на экран характеристики фигуры 1;" << endl;
				cout << "Введиет \"1\" чтобы повернуть фигуру 1;" << endl;
				cout << "Введиет \"2\" чтобы переместить фигуру 1;" << endl;
				cout << "Введиет \"100\" чтобы выйти из программы." << endl;
				cin >> key_menu_shape_1;
				switch (key_menu_shape_1) { // Меню работы с фигурой 1
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
					cout << "Введите величину, на которую необходимо переместить фигуру по оси Ox: " << endl << "x= "; cin >> move.x; cout << endl;
					cout << "Введите величину, на которую необходимо переместить фигуру по оси Oy: " << endl << "y= "; cin >> move.y; cout << endl;
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
				cout << "Выберите действие:" << endl;
				cout << "Введиет \"0\" чтобы вывести на экран характеристики фигуры 2;" << endl;
				cout << "Введиет \"1\" чтобы повернуть фигуру 2;" << endl;
				cout << "Введиет \"2\" чтобы переместить фигуру 2;" << endl;
				cout << "Введиет \"100\" чтобы выйти из программы." << endl;
				cin >> key_menu_shape_2;
				switch (key_menu_shape_2) { // Меню работы с фигурой 1
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
					cout << "Введите величину, на которую необходимо переместить фигуру по оси Ox: " << endl << "x= "; cin >> move.x; cout << endl;
					cout << "Введите величину, на которую необходимо переместить фигуру по оси Oy: " << endl << "y= "; cin >> move.y; cout << endl;
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

