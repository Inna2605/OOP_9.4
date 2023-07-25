#include<iostream>
#include "figure.h"
using namespace std;

figure::figure()
{
	cout << "Конструктор по умолчанию базового класса figure.\n";
	side = 0;
}

void figure::Input()
{
	cout << "Функция Input() базового класса figure: Ввод стороны фигуры.\n";
}

void figure::Output()
{
	cout << "Функция Output() базового класса figure: Вывод фигуры с определенной стороной.\n";
}

void figure::Square()
{ 
	cout << "Функция Square() базового класса figure: Площадь фигуры.\n";
}

void figure::Perimeter()
{
	cout << "Функция Perimeter() базового класса figure: Периметр фигуры.\n";

}

figure::~figure()
{
	cout << "Деструктор базового класса figure: Удаление фигуры.\n";
}
