/*����һ������Point, �������Ա����double Distance(const& Point) ������ľ��롣
��������������꣬
���������㣬 Ȼ�����Point���Distance�������������ľ��롣

Point ���ʹ�÷�ʽ���£�

int main() {
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	Point A(a, b), B(c, d);
	cout << A.Distance(B) << endl;
	return 0;
}

�����룺
1 2 3 4�س�
�����
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