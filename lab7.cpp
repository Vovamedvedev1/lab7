#include <fstream>
#include <iostream>
#include <string>
#include <string.h>
#include <locale.h>
#include "include/figure.h"
#include "include/Parallelogramm.h"
#include "include/Triangle.h"
#include "include/Circule.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int lenMassive;
	cout << "    Меню   " << endl;
	cout << "[1] Параллелограмм" << endl;
	cout << "[2] Треугольник" << endl;
	cout << "[3] Круг" << endl;
	cout << "Введите длину массива: "; cin >> lenMassive;
	Figure** figures = new Figure*[lenMassive];
	int t;
	double x, y, a, b, height, width, corner, radius;
	for (int i = 0; i < lenMassive; i++)
	{
		cout << "Выберете фигуру: "; cin >> t;
		switch (t)
		{
		case 1:
			cout << "Введите координаты вершины отрисовки параллелограмма: "; cin >> x; cin >> y;
			cout << "Введите width height corner"; cin >> width; cin >> height; cin >> corner;
			try
			{ 
				figures[i] = new Parallelogram(x, y, height, width, corner);
			}
			catch (const Exception& ex)
			{
				cout << ex.what() << endl;
				i--;
			}
			break;
		case 2:
			cout << "Введите координаты вершины отрисовки треугольника: "; cin >> x; cin >> y;
			cout << "Введите a b corner"; cin >> a; cin >> b; cin >> corner;
			try
			{
				figures[i] = new Triangle(x, y, a, b, corner);
			}
			catch (const Exception& ex)
			{
				cout << ex.what() << endl;
				i--;
			}
			break;
		case 3:
			cout << "Введите координаты центра окружности: "; cin >> x; cin >> y;
			cout << "Введите radius"; cin >> radius;
			try
			{
				figures[i] = new Circule(x,y,radius);
			}
			catch (const Exception& ex)
			{
				cout << ex.what() << endl;
				i--;
			}
			break;
		default:
			cout << "Такого пункта в меню нет" << endl;
			i--;
			break;
		}

	}
	for (int i = 0; i < lenMassive; i++)
		figures[i]->draw();


	for (int i = 0; i < lenMassive; i++)
		delete figures[i];
	delete[]figures;
	return 0;
}
