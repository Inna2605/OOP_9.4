#include <iostream>
#include<math.h>
#include<stdio.h>
#include "square.h"
using namespace std;

square::square() : figure()
{
	cout << "Конструктор дочернего класса square.\n";
}

void square::Input()
{
	cout << "(Функция Input() дочернего класса square) Введите сторону квадрата: ";
	cin >> side;
	cout << endl;
}

void square::Output()
{
	cout << "(Функция Output() дочернего класса square)\n";
	cout << "Площадь квадрата со стороною " << side << " равна " << square::Square() << endl;
	cout << "Периметр квадрата со стороною " << side << " равна " << square::Perimeter() << endl;
	cout << endl << endl;
}

float square::Square()
{
	cout << "(Функция Square() дочернего класса square: Вычисление площади)\n";
	float Squa = side * side;
	return Squa;
}

float square::Perimeter()
{
	cout << "(Функция Perimeter() дочернего класса square: Вычисление периметра)\n";
	float Perim = 4 * side;
	return Perim;
}

square::~square()
{
	cout << "(Деструктор дочернего класса square) Удаление квадрата.\n";
}
