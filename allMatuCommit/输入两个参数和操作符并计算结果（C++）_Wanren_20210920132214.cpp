#include "iostream"
#include <math.h>
using namespace std;
int main() {
	char c;
	float a, b, result=0;
	int tag=1; //?????1???????0???????????????
	cin >> a >> b >> c;
	switch (c) {
	case '+':result = a + b; break;
	case '-':result = a - b; break;
	case '*':result = a * b; break;
	case '/':
		if (fabs(b) < 1e-6) {
			cout << "divide 0" << endl;//???0????��??
			tag = 0;
			break;
		}
		result = a / b;
		cout << result << endl;
		break;
	default:
			tag = 0;
		cout << "invalid operation" << endl;
		break;
	}
	if (tag) {
		cout << result << endl;
	}
	return 0;
}

