#include "circle.h"
Circle::Circle(float a, float b, float r) :Point(a, b), radius(r) {} //构造函数
void Circle::setRadius(float r) {			//设置圆的半径
	radius = r;
}
float Circle::getRadius() const {			//读取圆的半径
	return radius;
}
float Circle::area() const {					//计算圆的面积
	return PI * radius*radius;
}
ostream & operator << (ostream &output, const Circle &c) {   //定义重载函数
	output << "Center=[" << c.x << "," << c.y << "],r=" << c.getRadius() << ",area=" << c.area() << endl;
	return output;
}