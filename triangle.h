#pragma once
#include "figure.h"

class triangle : public figure
{
public:
	triangle();//����������� ��������� ����� triangle
	void Input();//��������������� �������
	void Output();//��������������� �������
	float Square();//��������� �������
	float Perimeter();//��������� �������
	~triangle();//���������� ��������� ����� triangle
};

