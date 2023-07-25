#include <iostream>
#include<math.h>
#include<stdio.h>
#include "rectangle.h"
using namespace std;

rectangle::rectangle() : figure()
{
	cout << "Конструктор дочернего класса rectangle.\n";
}

void rectangle::Input()
{
	cout << "(Функция Input() дочернего класса rectangle)\nВведите первую сторону прямоугольника: ";
	cin >> side;
	cout << "Введите вторую сторону прямоугольника: ";
		cin >> side2;
	cout << endl;
}

void rectangle::Output()
{
	cout << "(Функция Output() дочернего класса rectangle)\n";
	cout << "Площадь прямоугольника с одной стороной " << side 
		<< " и второй стороной " << side2 << " равна " << Square() << endl;
	cout << "Периметр прямоугольника с одной стороной " << side 
		<< " и второй стороной " << side2 << " равна " << Perimeter() << endl;
	cout << endl << endl;
}

float rectangle::Square()
{
	cout << "(Функция Square() дочернего класса rectangle: Вычисление площади)\n";
	float Squa = side * side2;
	return Squa;
}

float rectangle::Perimeter()
{
	cout << "(Функция Perimeter() дочернего класса rectangle: Вычисление периметра)\n";
	float Perim = (2 * side) + (2 * side2);
	return Perim;
}

rectangle::~rectangle()
{
	cout << "(Деструктор дочернего класса rectangle) Удаление прямоугольника.\n";
}
