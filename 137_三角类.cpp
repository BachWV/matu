/*实现一个三角形类 Ctriangle
该类有一个GetPerimeter方法返回三角形的周长;
GetArea方法返回三角行的面积;
该类还提供一个display方法显示三角形的三边长度;

最终在main函数中生成该类，
输入三条边的长度（不用考虑三条边不能构成三角形的情况）;
展示三角形的三边长度以及周长和面积

Ctriangle类的使用如下，在你的代码中除了实现Ctriangle类还需引入一下代码。

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	Ctriangle T(a, b, c);
	T.display();
	cout << "Perimeter:" << T.GetPerimeter() << endl;
	cout << "Area:" << T.GetArea() << endl;
	return 0;
}
输出格式
输入：3 4 5回车
输出：
Ctriangle : a = 3, b = 4, c = 5回车
Perimeter : 12回车
Area : 6回车*/
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