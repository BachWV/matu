/*ʵ��һ���������� Ctriangle
������һ��GetPerimeter�������������ε��ܳ�;
GetArea�������������е����;
���໹�ṩһ��display������ʾ�����ε����߳���;

������main���������ɸ��࣬
���������ߵĳ��ȣ����ÿ��������߲��ܹ��������ε������;
չʾ�����ε����߳����Լ��ܳ������

Ctriangle���ʹ�����£�����Ĵ����г���ʵ��Ctriangle�໹������һ�´��롣

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	Ctriangle T(a, b, c);
	T.display();
	cout << "Perimeter:" << T.GetPerimeter() << endl;
	cout << "Area:" << T.GetArea() << endl;
	return 0;
}
�����ʽ
���룺3 4 5�س�
�����
Ctriangle : a = 3, b = 4, c = 5�س�
Perimeter : 12�س�
Area : 6�س�*/
#include<iostream>
#include<math.h>
using namespace std;
class Ctriangle {
public:
	int GetPerimeter() {
		return a + b + c;
	}
	double GetArea() {
		double p = (a + b + c) / 2;
		double square = sqrt(p * (p - a) * (p - b) * (p - c));
		return square;
	}
	Ctriangle(int a, int b, int c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
	void display() {
		cout << "Ctriangle:"<< "a="<<a<<",b="<<b<<",c="<< c<<endl;
	}
private:
	int a, b, c;
};
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	Ctriangle T(a, b, c);
	T.display();
	cout << "Perimeter:" << T.GetPerimeter() << endl;
	cout << "Area:" << T.GetArea() << endl;
	return 0;
}