#include"point.h"
Point::Point(float a, float b) {				//���캯��
	x = a; y = b;
}
void	Point::setPoint(float a, float b) {			//��������
	x = a; y = b;
}
ostream & operator <<(ostream &output, const Point &p) {		//������Ԫ����
	output << "[" << p.x<< "," << p.y << "]" << endl;
	return output;
}
