#include<iostream>
#include "figure.h"
using namespace std;

figure::figure()
{
	cout << "����������� �� ��������� �������� ������ figure.\n";
	side = 0;
}

void figure::Input()
{
	cout << "������� Input() �������� ������ figure: ���� ������� ������.\n";
}

void figure::Output()
{
	cout << "������� Output() �������� ������ figure: ����� ������ � ������������ ��������.\n";
}

void figure::Square()
{ 
	cout << "������� Square() �������� ������ figure: ������� ������.\n";
}

void figure::Perimeter()
{
	cout << "������� Perimeter() �������� ������ figure: �������� ������.\n";

}

figure::~figure()
{
	cout << "���������� �������� ������ figure: �������� ������.\n";
}
