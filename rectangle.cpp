#include <iostream>
#include<math.h>
#include<stdio.h>
#include "rectangle.h"
using namespace std;

rectangle::rectangle() : figure()
{
	cout << "����������� ��������� ������ rectangle.\n";
}

void rectangle::Input()
{
	cout << "(������� Input() ��������� ������ rectangle)\n������� ������ ������� ��������������: ";
	cin >> side;
	cout << "������� ������ ������� ��������������: ";
		cin >> side2;
	cout << endl;
}

void rectangle::Output()
{
	cout << "(������� Output() ��������� ������ rectangle)\n";
	cout << "������� �������������� � ����� �������� " << side 
		<< " � ������ �������� " << side2 << " ����� " << Square() << endl;
	cout << "�������� �������������� � ����� �������� " << side 
		<< " � ������ �������� " << side2 << " ����� " << Perimeter() << endl;
	cout << endl << endl;
}

float rectangle::Square()
{
	cout << "(������� Square() ��������� ������ rectangle: ���������� �������)\n";
	float Squa = side * side2;
	return Squa;
}

float rectangle::Perimeter()
{
	cout << "(������� Perimeter() ��������� ������ rectangle: ���������� ���������)\n";
	float Perim = (2 * side) + (2 * side2);
	return Perim;
}

rectangle::~rectangle()
{
	cout << "(���������� ��������� ������ rectangle) �������� ��������������.\n";
}
