#pragma once
#include"iostream"
using namespace std;
#pragma once
#include "stdlib.h"
#define PI 3.141592

class Point
{
public:
	Point(float x = 0.0, float y = 0.0);		//默认构造函数
	void setPoint(float, float);	//设置坐标值
	float getX() const { return x; }	//读x坐标，常成员函数
	float getY() const { return y; }	//读y坐标，常成员函数
	friend ostream & operator <<(ostream &, const Point &);	//友元函数，重载运算符<<
protected:
	float x;
	float y;
};