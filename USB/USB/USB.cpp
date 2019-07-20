#include"iostream"
#include "stdlib.h"
using namespace std;
class USB
{
public:
	virtual void connect() = 0;
	virtual ~USB() {}
};
class Mouse :public USB
{public:
	virtual void connect() {
		cout << "鼠标设备连接成功" << endl;
	}
	~Mouse() { cout << "鼠标移除成功" << endl; }
};
class Keyboard :public USB
{
public:
	void connect() {
		cout << "键盘连接成功" << endl;
	}
	~Keyboard() { cout << "键盘设备移除成功"<<endl; }
};
class Udisk :public USB
{
public:
	void connect() { cout << "U盘类连接成功"<<endl; }
	~Udisk() { cout << "U盘类移除成功" << endl; }
};
int main() {
	USB *p=NULL;
	Mouse m;
	p = & m;
	p->connect();
	
	USB  *pt = new Mouse;
	pt->connect();
	delete pt;

	system("pause");
	return 0;
}