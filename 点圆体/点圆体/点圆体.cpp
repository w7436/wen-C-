#include"point.h"
Point::Point(float a, float b) {				//构造函数
	x = a; y = b;
}
void	Point::setPoint(float a, float b) {			//设置坐标
	x = a; y = b;
}
ostream & operator <<(ostream &output, const Point &p) {		//定义友元函数
	output << "[" << p.x<< "," << p.y << "]" << endl;
	return output;
}
