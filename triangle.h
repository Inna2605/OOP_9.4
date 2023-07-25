#pragma once
#include "figure.h"

class triangle : public figure
{
public:
	triangle();//Конструктор дочернего класа triangle
	void Input();//Переопределение функции
	void Output();//Переопределение функции
	float Square();//Замещение функции
	float Perimeter();//Замещение функции
	~triangle();//Деструктор дочернего класа triangle
};

