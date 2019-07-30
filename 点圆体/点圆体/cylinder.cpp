#include "cylinder.h"
Cylinder::Cylinder(float a, float b, float r, float h) :Circle(a, b, r), height(h) {} //���幹�캯��
void Cylinder::setHeight(float h) {				//����Բ���ߵĺ���
	height = h;
}
float Cylinder::getHeight() const {				//��ȡԲ���ߵĺ���
	return height;
}
float Cylinder::area() const {						//����Բ����ĺ���
	return 2 * Circle::area() + 2 * 3.14159*radius*height;
}
float Cylinder::volumn() const {						//����Բ��������ĺ���
	return Circle::area()*height;
}
ostream & operator << (ostream & output, const Cylinder &cy) {			//������������غ���
	output << "Center=[" << cy.x << "," << cy.y << "],r=" << cy.radius << ",h=" << cy.height << "\narea=" << cy.area() << ",volumn=" << cy.volumn()
		<< endl;
	return output;
}