#include<iostream>
#include<math.h>
using namespace std;
int main() {
	double i=0, a=1,sign=1;
		double sum=0;
	while (fabs(a) >= 1e-8) {
                sum = sum + (sign *a);
                i++;
		a = 1/(2 * i + 1);
		sign = -sign;

	}
	cout << "steps=" << i<<" " << "PI=" << sum*4.0;

}