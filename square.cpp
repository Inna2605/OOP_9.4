#include <iostream>
#include<math.h>
#include<stdio.h>
#include "square.h"
using namespace std;

square::square() : figure()
{
	cout << "����������� ��������� ������ square.\n";
}

void square::Input()
{
	cout << "(������� Input() ��������� ������ square) ������� ������� ��������: ";
	cin >> side;
	cout << endl;
}

void square::Output()
{
	cout << "(������� Output() ��������� ������ square)\n";
	cout << "������� �������� �� �������� " << side << " ����� " << square::Square() << endl;
	cout << "�������� �������� �� �������� " << side << " ����� " << square::Perimeter() << endl;
	cout << endl << endl;
}

float square::Square()
{
	cout << "(������� Square() ��������� ������ square: ���������� �������)\n";
	float Squa = side * side;
	return Squa;
}

float square::Perimeter()
{
	cout << "(������� Perimeter() ��������� ������ square: ���������� ���������)\n";
	float Perim = 4 * side;
	return Perim;
}

square::~square()
{
	cout << "(���������� ��������� ������ square) �������� ��������.\n";
}
