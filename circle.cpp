#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include "circle.h"
using namespace std;

circle::circle() : figure()
{
	cout << "Конструктор дочернего класса circle.\n";
}

void circle::Input()
{
	cout << "(Функция Input() дочернего класса circle)\nВведите диаметр круга: ";
	cin >> side;
	cout << endl;
}

void circle::Output()
{
	cout << "(Функция Output() дочернего класса circle)\n";
	cout << "Площадь круга с диаметром " << side << " равна " << Square() << endl;
	cout << "Периметр круга с диаметром " << side << " равна " << Perimeter() << endl;
	cout << endl << endl;
}

float circle::Square()
{
	cout << "(Функция Square() дочернего класса circle: Вычисление площади)\n";
	float Squa = M_PI * ((side / 2) * (side / 2));
	return Squa;
}

float circle::Perimeter()
{
	cout << "(Функция Perimeter() дочернего класса circle: Вычисление периметра)\n";
	float Perim = 2 * M_PI * (side / 2);
	return Perim;
}

circle::~circle()
{
	cout << "(Деструктор дочернего класса circle) Удаление круга.\n";
}
