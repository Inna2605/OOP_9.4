#pragma once
#include "figure.h"
class square : public figure
{
public:
	square();//Конструктор дочернего класа square
	void Input();//Переопределение функции
	void Output();//Переопределение функции
	float Square();//Замещение функции
	float Perimeter();//Замещение функции
	~square();//Деструктор дочернего класа square
};

