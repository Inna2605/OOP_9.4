#include <iostream>
#include<math.h>
#include<stdio.h>
#include "triangle.h"
using namespace std;

float a, square, perimeter;

triangle::triangle() : figure()
{
	cout << "����������� ��������� ������ triangle.\n";
	/*side = a;
	cout << endl;*/
}

void triangle::Input()
{
	cout << "(������� Input() ��������� ������ triangle) ������� ������� ��������������� ������������: ";
	cin >> side;
	cout << endl;
}

void triangle::Output()
{
	cout << "(������� Output() ��������� ������ triangle)\n";
	triangle::Square();
	cout << "������� ��������������� ������������ �� �������� " << side << " ����� " << square << endl;
	triangle::Perimeter();
	cout << "�������� ��������������� ������������ �� �������� " << side << " ����� " << perimeter << endl;
	cout << endl << endl;
}

float triangle::Square()
{
	cout << "(������� Square() ��������� ������ triangle)\n";
	square = (sqrt(3) / 4) * (side * side);
	return square;
}

float triangle::Perimeter()
{
	cout << "(������� Perimeter() ��������� ������ triangle)\n";
	perimeter = 3 * side;
	return perimeter;
}

triangle::~triangle()
{
	cout << "(���������� ��������� ������ triangle) �������� ������������.\n";
}
