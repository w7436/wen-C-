#pragma once
#include"iostream"
using namespace std;
#pragma once
#include "stdlib.h"
#define PI 3.141592

class Point
{
public:
	Point(float x = 0.0, float y = 0.0);		//Ĭ�Ϲ��캯��
	void setPoint(float, float);	//��������ֵ
	float getX() const { return x; }	//��x���꣬����Ա����
	float getY() const { return y; }	//��y���꣬����Ա����
	friend ostream & operator <<(ostream &, const Point &);	//��Ԫ���������������<<
protected:
	float x;
	float y;
};