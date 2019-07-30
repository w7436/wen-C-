#pragma once

#include "point.h"
class Circle :public Point
{
public:
	Circle(float x = 0.0, float y = 0.0, float r = 0.0);		//默认构造函数
	void setRadius(float r);		//设置圆半径函数
	float getRadius() const;		//读取圆半径函数
	float area() const;			//圆面积函数
	friend ostream & operator<<(ostream &, const Circle &);		//声明
protected:
	float radius;
};