#include <iostream>
#include<math.h>
#include<stdio.h>
#include "triangle.h"
using namespace std;

float a, square, perimeter;

triangle::triangle() : figure()
{
	cout << "Конструктор дочернего класса triangle.\n";
	/*side = a;
	cout << endl;*/
}

void triangle::Input()
{
	cout << "(Функция Input() дочернего класса triangle) Введите сторону равностороннего треугольника: ";
	cin >> side;
	cout << endl;
}

void triangle::Output()
{
	cout << "(Функция Output() дочернего класса triangle)\n";
	triangle::Square();
	cout << "Площадь равностороннего треугольника со стороною " << side << " равна " << square << endl;
	triangle::Perimeter();
	cout << "Периметр равностороннего треугольника со стороною " << side << " равна " << perimeter << endl;
	cout << endl << endl;
}

float triangle::Square()
{
	cout << "(Функция Square() дочернего класса triangle)\n";
	square = (sqrt(3) / 4) * (side * side);
	return square;
}

float triangle::Perimeter()
{
	cout << "(Функция Perimeter() дочернего класса triangle)\n";
	perimeter = 3 * side;
	return perimeter;
}

triangle::~triangle()
{
	cout << "(Деструктор дочернего класса triangle) Удаление треугольника.\n";
}
