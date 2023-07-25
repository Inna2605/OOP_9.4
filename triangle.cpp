#include <iostream>
#include<math.h>
#include<stdio.h>
#include "triangle.h"
using namespace std;

triangle::triangle() : figure()
{
	cout << "Конструктор дочернего класса triangle.\n";
}

void triangle::Input()
{
	cout << "(Функция Input() дочернего класса triangle)\nВведите сторону равностороннего треугольника: ";
	cin >> side;
	cout << endl;
}

void triangle::Output()
{
	cout << "(Функция Output() дочернего класса triangle)\n";
	cout << "Площадь равностороннего треугольника со стороною " << side << " равна " << Square() << endl;
	cout << "Периметр равностороннего треугольника со стороною " << side << " равна " << Perimeter() << endl;
	cout << endl << endl;
}

float triangle::Square()
{
	cout << "(Функция Square() дочернего класса triangle: Вычисление площади)\n";
	float Squa = (sqrt(3) / 4) * (side * side);
	return Squa;
}

float triangle::Perimeter()
{
	cout << "(Функция Perimeter() дочернего класса triangle: Вычисление периметра)\n";
	float Perim = 3 * side;
	return Perim;
}

triangle::~triangle()
{
	cout << "(Деструктор дочернего класса triangle) Удаление треугольника.\n";
}
