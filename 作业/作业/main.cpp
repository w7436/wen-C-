#include<stdlib.h>
#include<iostream>
#include<string>


#if 0
using namespace std;
class Teacher {
private:
	string name;
	int	ID;
	int wage;//����
	int bonus;//����
	int  taxation;//����˰
	int num;//ʵ�ʷ�����
public:
	Teacher(string n, int I) :name(n), ID(I) {};
	Teacher(string n, int I,int w, int b, int t) :name(n), ID(I),wage(w), bonus(b), taxation(t) {};
	void input() {
		cin >> wage;
		cin >>  bonus ;
		cin >>taxation ;
	}
	int amount() {
		return wage + bonus - taxation;
	}
	void display() {
		cout << "name:" << name << endl;
		cout << "ID:" << ID << endl;
		cout << "���ʣ�" << wage;
		cout << "����" << bonus << endl;
		cout << "����˰��" << taxation << endl;
	}
};
int main() {
	Teacher t1("shang",31);
	Teacher t2("zhang",32,1000,2000,1000);
	t1.input();
	t1.display();
	cout << "ʵ�ʷ�������" << t1.amount() << endl;
	cout << "ʵ�ʷ�������" << t2.amount() << endl;
	system("pause");
	return 0;
}


//������
class Auto {
	protected:
		string type;
		string producer;
		int weight;
		string  hue;//��ɫ
	public:
		Auto() :type("SUV"), producer("sss"), weight(20), hue("��") {};
		string  display() {
			return type;
		}
		~Auto() {}
};
//С�γ���
class Car :public Auto {

protected:
	int max_speed;//���ʱ��
	int oil_consumption;//������
	int passer_num;//�ؿ���
	int deadweight;//������
public:
	Car() :Auto() {
		max_speed = 160;
		oil_consumption = 20;
		passer_num = 20;
		deadweight = 120;
	}
	int speed() {
		return weight;
	}
	~Car(){}
};
class Truck :public Auto {
protected:
	string type1;
public:
	Truck():Auto() {
		type1 = "suv";
	}
	string type(){
		return type1;
	}
	~Truck() {}
};
//������
int main() {
	return 0;
}
#endif