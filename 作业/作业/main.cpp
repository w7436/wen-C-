#include<stdlib.h>
#include<iostream>
#include<string>


#if 0
using namespace std;
class Teacher {
private:
	string name;
	int	ID;
	int wage;//工资
	int bonus;//奖金
	int  taxation;//所得税
	int num;//实际发放数
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
		cout << "工资：" << wage;
		cout << "奖金：" << bonus << endl;
		cout << "所得税：" << taxation << endl;
	}
};
int main() {
	Teacher t1("shang",31);
	Teacher t2("zhang",32,1000,2000,1000);
	t1.input();
	t1.display();
	cout << "实际发放数：" << t1.amount() << endl;
	cout << "实际发放数：" << t2.amount() << endl;
	system("pause");
	return 0;
}


//汽车类
class Auto {
	protected:
		string type;
		string producer;
		int weight;
		string  hue;//颜色
	public:
		Auto() :type("SUV"), producer("sss"), weight(20), hue("红") {};
		string  display() {
			return type;
		}
		~Auto() {}
};
//小轿车类
class Car :public Auto {

protected:
	int max_speed;//最高时速
	int oil_consumption;//耗油量
	int passer_num;//载客数
	int deadweight;//载重量
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
//卡车类
int main() {
	return 0;
}
#endif