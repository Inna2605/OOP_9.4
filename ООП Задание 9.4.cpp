#include <iostream>
#include "figure.h"
#include"triangle.h"
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
}