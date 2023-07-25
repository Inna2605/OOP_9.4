#pragma once
#include "figure.h"
class circle : public figure
{
public:
	circle();//Конструктор дочернего класа triangle
	void Input();//Переопределение функции
	void Output();//Переопределение функции
	float Square();//Замещение функции
	float Perimeter();//Замещение функции
	~circle();//Деструктор дочернего класа triangle
};

