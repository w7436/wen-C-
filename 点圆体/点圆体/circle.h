#pragma once

#include "point.h"
class Circle :public Point
{
public:
	Circle(float x = 0.0, float y = 0.0, float r = 0.0);		//Ĭ�Ϲ��캯��
	void setRadius(float r);		//����Բ�뾶����
	float getRadius() const;		//��ȡԲ�뾶����
	float area() const;			//Բ�������
	friend ostream & operator<<(ostream &, const Circle &);		//����
protected:
	float radius;
};