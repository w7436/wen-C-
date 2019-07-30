#pragma once
#include"point.h"
#include "circle.h"
class Cylinder :public Circle
{
public:
	Cylinder(float x = 0, float y = 0, float r = 0, float h = 0);	//���캯��
	void setHeight(float);					//����Բ���ߵĺ���
	float getHeight() const;				//��ȡԲ���ߵĺ���
	float area() const;						//����Բ����ĺ���
	float volumn() const;					//��������ĺ���
	friend ostream & operator<<(ostream &, const Cylinder &);    //���غ���
protected:
	float height;
};