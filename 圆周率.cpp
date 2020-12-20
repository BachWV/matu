#include<stdlib.h>
#include<time.h>
#include <iostream>
using namespace std;

int main() {
	int m = 1;
	double pi4 = 1, point = 1,i=1;
	while (abs(point) > 1e-8) {
		m =- m;
		point = m / (2 * i + 1);
		pi4 = pi4 + point;
		i++;
		cout << i<< endl;
	}
	cout << "steps=" << i + 1 << " PI=" << pi4 * 4 << endl;
}