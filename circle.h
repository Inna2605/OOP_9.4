#pragma once
#include "figure.h"
class circle : public figure
{
public:
	circle();//����������� ��������� ����� triangle
	void Input();//��������������� �������
	void Output();//��������������� �������
	float Square();//��������� �������
	float Perimeter();//��������� �������
	~circle();//���������� ��������� ����� triangle
};

