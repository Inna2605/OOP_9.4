#pragma once
#include "figure.h"
class square : public figure
{
public:
	square();//����������� ��������� ����� square
	void Input();//��������������� �������
	void Output();//��������������� �������
	float Square();//��������� �������
	float Perimeter();//��������� �������
	~square();//���������� ��������� ����� square
};

