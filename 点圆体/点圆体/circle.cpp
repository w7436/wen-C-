#include "circle.h"
Circle::Circle(float a, float b, float r) :Point(a, b), radius(r) {} //���캯��
void Circle::setRadius(float r) {			//����Բ�İ뾶
	radius = r;
}
float Circle::getRadius() const {			//��ȡԲ�İ뾶
	return radius;
}
float Circle::area() const {					//����Բ�����
	return PI * radius*radius;
}
ostream & operator << (ostream &output, const Circle &c) {   //�������غ���
	output << "Center=[" << c.x << "," << c.y << "],r=" << c.getRadius() << ",area=" << c.area() << endl;
	return output;
}