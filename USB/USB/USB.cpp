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
		cout << "����豸���ӳɹ�" << endl;
	}
	~Mouse() { cout << "����Ƴ��ɹ�" << endl; }
};
class Keyboard :public USB
{
public:
	void connect() {
		cout << "�������ӳɹ�" << endl;
	}
	~Keyboard() { cout << "�����豸�Ƴ��ɹ�"<<endl; }
};
class Udisk :public USB
{
public:
	void connect() { cout << "U�������ӳɹ�"<<endl; }
	~Udisk() { cout << "U�����Ƴ��ɹ�" << endl; }
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