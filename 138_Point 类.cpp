/*定义一个点类Point, 并定义成员函数double Distance(const& Point) 求两点的距离。
输入两个点的坐标，
创建两个点， 然后调用Point类的Distance方法输出两个点的距离。

Point 类的使用方式如下：

int main() {
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	Point A(a, b), B(c, d);
	cout << A.Distance(B) << endl;
	return 0;
}

如输入：
1 2 3 4回车
输出：
2.82843
*/
#include<iostream>
#include<math.h>
using namespace std;
class Point {
public:
	double Distance(const Point&B) {
		double dis = sqrt((a -B.a) * (a - B.a) + (b - B.b) * (b - B.b));
		return dis;

	}
	Point(int a, int b){
		this->a = a;
		this->b = b;
	}
public:
	double a, b;

};
int main() {
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	Point A(a, b), B(c, d);
	cout << A.Distance(B) << endl;
	return 0;
}