#include "stdafx.h"
#include "Operation.h"


Operation::Operation(Shape* s1, Shape* s2){
	
	//Проверка правильности подбора типов фигур
	if ((s1->ID == 'T' && s2->ID == 'Z') || (s1->ID == 'Z' && s2->ID == 'T'))
		cout << "Верный выбор" << endl;
	else { cout << "Выбор не верен" << endl;  return; }
	_s1 = s1;
	_s2 = s2;

	amount_angle_1 = _s1->angle_shape;	// Получение количества вершин фигуры
	arry_shape_1 = new Point[amount_angle_1]; // Создание массива вершин фигуры
	for (int i = 0; i < amount_angle_1; i++) {
		arry_shape_1[i].x = _s1->arry[i].x;
		arry_shape_1[i].y = _s1->arry[i].y;
	}

	amount_angle_2 = _s2->angle_shape; // Получение количества вершин фигуры
	arry_shape_2 = new Point[amount_angle_2]; // Создание массива вершин фигуры
	for (int i = 0; i < amount_angle_2; i++) {
		arry_shape_2[i].x = _s2->arry[i].x;
		arry_shape_2[i].y = _s2->arry[i].y;
	}
}

void Operation::Compare() {
	cout <<"S1= "<< _s1->ploshad << endl <<"S2= " << _s2->ploshad << endl;
	if (_s1->ploshad > _s2->ploshad) { cout << "Площадь " << _s1->ID << " > " << _s2->ID << endl; }
	else if (_s1->ploshad == _s2->ploshad) { cout << "Площадь " << _s1->ID << " = " << _s2->ID << endl; }
	else  { cout << "площадь " << _s1->ID << " < " << _s2->ID << endl; }
				
}

bool Operation::IsIntersect_t_z()                              //функция - проверяет пересекает ли треугольник трапецию
{
	intersections_num = 0;
	if (_s1->ID = 'T') {
		for (int j = 0; j < amount_angle_1; j++)
		{
			bool prev_under = (arry_shape_2[prev].y < arry_shape_1[j].y);
			for (int i = 0; i < amount_angle_2; i++)
			{
				a = new Point[amount_angle_2];
				b = new Point[amount_angle_2];
				bool cur_under = ((arry_shape_2[i].y < arry_shape_1[j].y));
				a[i].x = arry_shape_2[prev].x - arry_shape_1[j].x;
				a[i].y = arry_shape_2[prev].y - arry_shape_1[j].y;
				b[i].y = arry_shape_2[i].y - arry_shape_1[j].x;
				b[i].y = arry_shape_2[i].y - arry_shape_1[j].y;

				float t = (a[i].x * (b[i].y - a[i].y) - a[i].y * (b[i].x - a[i].x));
				if (cur_under && !prev_under)
				{
					if (t > 0)
						intersections_num += 1;
				}
				if (!cur_under && prev_under)
				{
					if (t < 0)
						intersections_num += 1;
				}
				prev = i;
				prev_under = cur_under;
			}
		}
	}
	else {
		for (int j = 0; j < amount_angle_2; j++)
		{
			bool prev_under = (arry_shape_1[prev].y < arry_shape_2[j].y);
			for (int i = 0; i < amount_angle_1; i++)
			{
				a = new Point[amount_angle_1];
				b = new Point[amount_angle_1];
				bool cur_under = ((arry_shape_1[i].y < arry_shape_2[j].y));
				a[i].x = arry_shape_1[prev].x - arry_shape_2[j].x;
				a[i].y = arry_shape_1[prev].y - arry_shape_2[j].y;
				b[i].y = arry_shape_1[i].y - arry_shape_2[j].x;
				b[i].y = arry_shape_1[i].y - arry_shape_2[j].y;

				float t = (a[i].x * (b[i].y - a[i].y) - a[i].y * (b[i].x - a[i].x));
				if (cur_under && !prev_under)
				{
					if (t > 0)
						intersections_num += 1;
				}
				if (!cur_under && prev_under)
				{
					if (t < 0)
						intersections_num += 1;
				}
				prev = i;
				prev_under = cur_under;
			}
		}
	}
	
/*	if ((intersections_num == 1) || (intersections_num == 2)) { return true; }
	else { return false; }*/
	if ((intersections_num == 1) || (intersections_num == 2)) { cout << "Треугольник пересекает трапецию" << endl; }
	else { cout << "Треугольник не пересекает трапецию" << endl; }
	return (intersections_num & 1) != 0;
}

bool Operation::IsIntersect_z_t()  //функция - проверяет пересекает ли параллелограмм треугольник 
{
	intersections_num = 0;
	prev = 3 - 1;
	if (_s1->ID = 'T') {
		for (int j = 0; j < amount_angle_2; j++)
		{
			bool prev_under = (arry_shape_1[prev].y < arry_shape_2[j].y);
			for (int i = 0; i < amount_angle_1; i++)
			{
				bool cur_under = ((arry_shape_1[i].y < arry_shape_2[j].y));
				a[i].x = arry_shape_1[prev].x - arry_shape_2[j].x;
				a[i].y = arry_shape_1[prev].y - arry_shape_2[j].y;
				b[i].x = arry_shape_1[i].x - arry_shape_2[j].x;
				b[i].y = arry_shape_1[i].y - arry_shape_2[j].y;

				float t = (a[i].x * (b[i].y - a[i].y) - a[i].y * (b[i].x - a[i].y));
				if (!cur_under && prev_under)
				{
					if (t > 0)
						intersections_num += 1;
				}
				if (cur_under && !prev_under)
				{
					if (t < 0)
						intersections_num += 1;
				}
				prev = i;
				prev_under = cur_under;
			}
		}
	} else {
		for (int j = 0; j < amount_angle_1; j++)
		{
			bool prev_under = (arry_shape_2[prev].y < arry_shape_1[j].y);
			for (int i = 0; i < amount_angle_2; i++)
			{
				bool cur_under = ((arry_shape_2[i].y < arry_shape_1[j].y));
				a[i].x = arry_shape_2[prev].x - arry_shape_1[j].x;
				a[i].y = arry_shape_2[prev].y - arry_shape_1[j].y;
				b[i].x = arry_shape_2[i].x - arry_shape_1[j].x;
				b[i].y = arry_shape_2[i].y - arry_shape_1[j].y;

				float t = (a[i].x * (b[i].y - a[i].y) - a[i].y * (b[i].x - a[i].y));
				if (!cur_under && prev_under)
				{
					if (t > 0)
						intersections_num += 1;
				}
				if (cur_under && !prev_under)
				{
					if (t < 0)
						intersections_num += 1;
				}
				prev = i;
				prev_under = cur_under;
			}
		}
	}
	
	/*if ((intersections_num == 1) || (intersections_num == 2) || (intersections_num == 3)) { return true; }
	else { return false; }*/
	if ((intersections_num == 1) || (intersections_num == 2) || (intersections_num == 3)) { cout << "Трапеция пересекает треугольник" << endl; }
	else { cout << "Трапеция не пересекает треугольник" << endl; }
	return (intersections_num & 1) != 0;
}

bool Operation::IsInclude_t_v_z() //функция - проверяет, включается ли треугольник в трапецию
{
	intersections_num = 0;
	int prev = 4 - 1;
	if (_s1->ID = 'T') {

		a = new Point[amount_angle_2];
		b = new Point[amount_angle_2];
		for (int j = 0; j < amount_angle_1; j++)
		{
			bool prev_under = (arry_shape_2[prev].y <= arry_shape_1[j].y);
			for (int i = 0; i < amount_angle_2; i++)
			{
				bool cur_under = ((arry_shape_2[i].y <= arry_shape_1[j].y));
				a[i].x = arry_shape_2[prev].x - arry_shape_1[j].x;
				a[i].y = arry_shape_2[prev].y - arry_shape_1[j].y;
				b[i].x = arry_shape_2[i].x - arry_shape_1[j].x;
				b[i].y = arry_shape_2[i].y - arry_shape_1[j].y;

				float t = (a[i].x * (b[i].y - a[i].y) - a[i].y * (b[i].x - a[i].x));
				if (cur_under && !prev_under)
				{
					if (t > 0)
						intersections_num += 1;
				}
				if (!cur_under && prev_under)
				{
					if (t < 0)
						intersections_num += 1;
				}
				prev = i;
				prev_under = cur_under;
			}
		}
	/*	if (intersections_num == amount_angle_1) { return true; }
		else { return false; }*/
		
	}
	else {
		a = new Point[amount_angle_1];
		b = new Point[amount_angle_1];
		for (int j = 0; j < amount_angle_2; j++)
		{
			bool prev_under = (arry_shape_1[prev].y <= arry_shape_2[j].y);
			for (int i = 0; i < amount_angle_1; i++)
			{
				bool cur_under = ((arry_shape_1[i].y <= arry_shape_2[j].y));
				a[i].x = arry_shape_1[prev].x - arry_shape_2[j].x;
				a[i].y = arry_shape_1[prev].y - arry_shape_2[j].y;
				b[i].x = arry_shape_1[i].x - arry_shape_2[j].x;
				b[i].y = arry_shape_1[i].y - arry_shape_2[j].y;

				float t = (a[i].x * (b[i].y - a[i].y) - a[i].y * (b[i].x - a[i].x));
				if (cur_under && !prev_under)
				{
					if (t > 0)
						intersections_num += 1;
				}
				if (!cur_under && prev_under)
				{
					if (t < 0)
						intersections_num += 1;
				}
				prev = i;
				prev_under = cur_under;
			}
		}
		/*if (intersections_num == amount_angle_2) { return true; }
		else { return false; }*/

	}
	if (intersections_num <3) { cout << "Треугольник не включается в трапецию" << endl; }
	if (intersections_num == 3) { cout << "Треугольник включается в трапецию" << endl; }
	return (intersections_num & 1) != 0;
}

bool Operation::IsInclude_z_v_t()   //функция - проверяет, включается ли трапеция в треугольник 
{
	intersections_num = 0;
	int prev = 3 - 1;
	if (_s1->ID = 'T') {
		a = new Point[amount_angle_1];
		b = new Point[amount_angle_1];
		for (int j = 0; j < amount_angle_2; j++)
		{
			bool prev_under = (arry_shape_1[prev].y < arry_shape_2[j].y);
			for (int i = 0; i < amount_angle_1; i++)
			{
				bool cur_under = ((arry_shape_1[i].y < arry_shape_2[j].y));
				a[i].x = arry_shape_1[prev].x - arry_shape_2[j].x;
				a[i].y = arry_shape_1[prev].y - arry_shape_2[j].y;
				b[i].x = arry_shape_1[i].x - arry_shape_2[j].x;
				b[i].y = arry_shape_1[i].y - arry_shape_2[j].y;

				float t = (a[i].x * (b[i].y - a[i].y) - a[i].y * (b[i].x - a[i].x));
				if (!cur_under && prev_under)
				{
					if (t > 0)
						intersections_num += 1;
				}
				if (cur_under && !prev_under)
				{
					if (t < 0)
						intersections_num += 1;
				}
				prev = i;
				prev_under = cur_under;
			}
		}
	/*	if (intersections_num == amount_angle_2) { return true; }
		else { return false; }*/
	}
	else {
		a = new Point[amount_angle_2];
		b = new Point[amount_angle_2];
		for (int j = 0; j < amount_angle_1; j++)
		{
			bool prev_under = (arry_shape_2[prev].y < arry_shape_1[j].y);
			for (int i = 0; i < amount_angle_2; i++)
			{
				bool cur_under = ((arry_shape_2[i].y < arry_shape_1[j].y));
				a[i].x = arry_shape_2[prev].x - arry_shape_1[j].x;
				a[i].y = arry_shape_2[prev].y - arry_shape_1[j].y;
				b[i].x = arry_shape_2[i].x - arry_shape_1[j].x;
				b[i].y = arry_shape_2[i].y - arry_shape_1[j].y;

				float t = (a[i].x * (b[i].y - a[i].y) - a[i].y * (b[i].x - a[i].x));
				if (!cur_under && prev_under)
				{
					if (t > 0)
						intersections_num += 1;
				}
				if (cur_under && !prev_under)
				{
					if (t < 0)
						intersections_num += 1;
				}
				prev = i;
				prev_under = cur_under;
			}
		}
	/*	if (intersections_num == amount_angle_1) { return true; }
		else { return false; }*/
		
	}
	if (intersections_num < 4) { cout << "Трапеция не включается в треугольник" << endl; }
	if (intersections_num == 4) { cout << "Трапеция включается в треугольник" << endl; }
	return (intersections_num & 1) != 0;
}

Operation::~Operation()
{
	delete arry_shape_1;
	delete arry_shape_2;
	delete a;
	delete b;
}
