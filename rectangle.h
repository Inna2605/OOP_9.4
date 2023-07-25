#pragma once
#include "figure.h"
class rectangle : public figure
{
private:
	float side2;
public:
	rectangle();//Конструктор дочернего класа rectangle
	void Input();//Переопределение функции
	void Output();//Переопределение функции
	float Square();//Замещение функции
	float Perimeter();//Замещение функции
	~rectangle();//Деструктор дочернего класа rectangle
};

