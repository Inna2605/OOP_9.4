#include <iostream>
#include<math.h>
#include<stdio.h>
#include "triangle.h"
using namespace std;

triangle::triangle() : figure()
{
	cout << "����������� ��������� ������ triangle.\n";
}

void triangle::Input()
{
	cout << "(������� Input() ��������� ������ triangle)\n������� ������� ��������������� ������������: ";
	cin >> side;
	cout << endl;
}

void triangle::Output()
{
	cout << "(������� Output() ��������� ������ triangle)\n";
	cout << "������� ��������������� ������������ �� �������� " << side << " ����� " << Square() << endl;
	cout << "�������� ��������������� ������������ �� �������� " << side << " ����� " << Perimeter() << endl;
	cout << endl << endl;
}

float triangle::Square()
{
	cout << "(������� Square() ��������� ������ triangle: ���������� �������)\n";
	float Squa = (sqrt(3) / 4) * (side * side);
	return Squa;
}

float triangle::Perimeter()
{
	cout << "(������� Perimeter() ��������� ������ triangle: ���������� ���������)\n";
	float Perim = 3 * side;
	return Perim;
}

triangle::~triangle()
{
	cout << "(���������� ��������� ������ triangle) �������� ������������.\n";
}
