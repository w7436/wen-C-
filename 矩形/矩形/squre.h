#pragma once
#include <iostream>
using namespace std;
class CRectangle {
private:
	int x, y;//���Ͻǵ�����
	int m, n;//���½ǵ�����
public:
	CRectangle(int a = 0, int b = 0,int c=2,int d=3) {
		a = x;
		b = y;
		c = m;
		d = n;
	}
	void Move(int a , int b, int , int d );
	int Where();//�������Ͻǵ�����
	int Area();
};