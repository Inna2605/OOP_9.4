#pragma once
#include "figure.h"
class rectangle : public figure
{
private:
	float side2;
public:
	rectangle();//����������� ��������� ����� rectangle
	void Input();//��������������� �������
	void Output();//��������������� �������
	float Square();//��������� �������
	float Perimeter();//��������� �������
	~rectangle();//���������� ��������� ����� rectangle
};

