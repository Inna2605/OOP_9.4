#include <iostream>
#include "figure.h"
#include "triangle.h"
#include "square.h"
#include "rectangle.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");

	figure obj;
	obj.Input();
	obj.Square();
	obj.Perimeter();
	obj.Output();
	cout << endl;

	triangle tria;
	tria.Input();
	tria.Output();
	cout << endl;

	square squa;
	squa.Input();
	squa.Output();
	cout << endl;

	rectangle rect;
	rect.Input();
	rect.Output();
	cout << endl;
}