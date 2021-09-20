#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i=1,n=1;
	double t = 1, sign = 1, pi = 0,PI;
	while (fabs(t) >= 1e-8)
	{
		pi = pi + t;
		i = i + 2;
		sign = -sign;
		t = sign * 1.0 / i;
		n++;
	}
	PI = 4 * pi;
	cout << "steps=" << n << " PI=" <<PI << endl;
	return 0;
}