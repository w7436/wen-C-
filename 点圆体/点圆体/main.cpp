#include "cylinder.h"
int main() {


	Cylinder cy1(3.5, 6.4, 5.2, 10);		//����Cylinder�����cy1,���ҳ�ʼ����
	cout << "original cylinder:\nx=" << cy1.getX() << ",y=" << cy1.getY() << ",r=" << cy1.getRadius() << ",h=" << cy1.getHeight()
		<< "\narea=" << cy1.area() << ",volumn=" << cy1.volumn() << endl;
	//cy1������
	cy1.setHeight(15);		//Բ����ĸ�
	cy1.setRadius(7.5);			//Բ����İ뾶
	cy1.setPoint(5, 5);			//Բ�ĵ�����x,y
	cout << "\nnew cylinder: \n" << cy1;			//������������cy1��ֵ
	Point &pRef = cy1;							//pRefΪPoint����������
	cout << "\npRef as a point:" << pRef;			//pRef��Ϊһ�������
	Circle &cRef = cy1;								//cRef ΪCircle�������
	cout << "\ncRef as a circle:" << cRef;				//cRef ��Ϊһ��Բ���
	system("pause");
	return 0;




}