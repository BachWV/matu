#include<cstdio>
#include<cmath>
#include<iostream>
#pragma warning(disable:4996)
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int x, i, t = 1, sum = 0;
	cin >> x;
	//if ((x == 1) || (x == 2) || (x == 3) || (x == 4) || (x == 5) || (x == 6?? || ??x == 7?? ||??x == 8?? || ??x == 9?? || ??x == 10??)
	if (1 <= x && x <= 10)
	{
		i = 1;
		while (i <= x)
		{
			t = i * t;
			sum = sum + t;
			i++;
		}
		cout << sum;
	}
	else cout<<"error";
}