#pragma once
#include"point.h"
#include "circle.h"
class Cylinder :public Circle
{
public:
	Cylinder(float x = 0, float y = 0, float r = 0, float h = 0);	//构造函数
	void setHeight(float);					//设置圆柱高的函数
	float getHeight() const;				//读取圆柱高的函数
	float area() const;						//计算圆面积的函数
	float volumn() const;					//计算体积的函数
	friend ostream & operator<<(ostream &, const Cylinder &);    //重载函数
protected:
	float height;
};