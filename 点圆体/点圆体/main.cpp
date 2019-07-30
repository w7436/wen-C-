#include "cylinder.h"
int main() {


	Cylinder cy1(3.5, 6.4, 5.2, 10);		//定义Cylinder类对象cy1,并且初始化·
	cout << "original cylinder:\nx=" << cy1.getX() << ",y=" << cy1.getY() << ",r=" << cy1.getRadius() << ",h=" << cy1.getHeight()
		<< "\narea=" << cy1.area() << ",volumn=" << cy1.volumn() << endl;
	//cy1的数据
	cy1.setHeight(15);		//圆柱体的高
	cy1.setRadius(7.5);			//圆柱体的半径
	cy1.setPoint(5, 5);			//圆心的坐标x,y
	cout << "\nnew cylinder: \n" << cy1;			//重载运算符输出cy1的值
	Point &pRef = cy1;							//pRef为Point类对象的引用
	cout << "\npRef as a point:" << pRef;			//pRef作为一个点输出
	Circle &cRef = cy1;								//cRef 为Circle类的引用
	cout << "\ncRef as a circle:" << cRef;				//cRef 作为一个圆输出
	system("pause");
	return 0;




}