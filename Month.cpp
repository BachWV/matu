#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int isYear(int a) {
	if (a % 400 == 0||(a % 4 == 0 && a % 100 != 0))return 1;
	else return 0;
}
int isMonth(int b) {
	switch (b) {
	case 4:
	case 6:
	case 9:
	case 11:return 30; break;
	case 2:return 28; break;
	default:return 31; break;
	}
}

int main() {
	int a, b, c;

	cin >> a >> b;
	c = isYear(a);
	if (c == 1 && b == 2) {
		cout << "days:29" << endl;
	}
	else {
		int d = isMonth(b);
		cout << "days:" << d << endl;
	}
}