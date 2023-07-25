#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include "circle.h"
using namespace std;

circle::circle() : figure()
{
	cout << "����������� ��������� ������ circle.\n";
}

void circle::Input()
{
	cout << "(������� Input() ��������� ������ circle)\n������� ������� �����: ";
	cin >> side;
	cout << endl;
}

void circle::Output()
{
	cout << "(������� Output() ��������� ������ circle)\n";
	cout << "������� ����� � ��������� " << side << " ����� " << Square() << endl;
	cout << "�������� ����� � ��������� " << side << " ����� " << Perimeter() << endl;
	cout << endl << endl;
}

float circle::Square()
{
	cout << "(������� Square() ��������� ������ circle: ���������� �������)\n";
	float Squa = M_PI * ((side / 2) * (side / 2));
	return Squa;
}

float circle::Perimeter()
{
	cout << "(������� Perimeter() ��������� ������ circle: ���������� ���������)\n";
	float Perim = 2 * M_PI * (side / 2);
	return Perim;
}

circle::~circle()
{
	cout << "(���������� ��������� ������ circle) �������� �����.\n";
}
