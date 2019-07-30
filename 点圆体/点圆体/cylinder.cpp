#include "cylinder.h"
Cylinder::Cylinder(float a, float b, float r, float h) :Circle(a, b, r), height(h) {} //定义构造函数
void Cylinder::setHeight(float h) {				//定义圆柱高的函数
	height = h;
}
float Cylinder::getHeight() const {				//读取圆柱高的函数
	return height;
}
float Cylinder::area() const {						//定义圆面积的函数
	return 2 * Circle::area() + 2 * 3.14159*radius*height;
}
float Cylinder::volumn() const {						//定义圆柱体体积的函数
	return Circle::area()*height;
}
ostream & operator << (ostream & output, const Cylinder &cy) {			//定义运算符重载函数
	output << "Center=[" << cy.x << "," << cy.y << "],r=" << cy.radius << ",h=" << cy.height << "\narea=" << cy.area() << ",volumn=" << cy.volumn()
		<< endl;
	return output;
}