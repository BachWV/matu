
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include <iostream>
using namespace std;
int main() {
	int i = 1, m = 1;
	double pi4 = 1, point = 1;
	while (abs(point) < 1e-8) {
		m = (-1) * m;
		point = m * 1 / (2 * i + 1);
		pi4 = pi4 + point;
		i++;
	}
	cout << "steps=" << i + 1 << " PI=" << pi4 * 4 << endl;
}
/// <summary>
/// &f将返回值*m和f相连接，共用一个名字
/// </summary>
/// <returns></returns>
/*
int& f(int* m) {
	return *m;
}
int main() {
	int a = 5;
	int b = f(&a);
	cout << b << endl;
	f(&a) = 11;
	cout << a << endl;
}*/

