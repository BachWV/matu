#include<iostream>
using namespace std;

void Matrix_Mul(int a[3][2], int b[2][4])
{
	int ans[3][4] = { 0 };
	int i, j, k = 0;
	for (j = 0; j < 3; j++)
		for (i = 0; i < 4; i++)
			for (k = 0; k < 2; k++)
				ans[j][i] = ans[j][i] + a[j][k]*b[k][i];
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 4; i++)
			cout << ans[j][i] << ' ';
		cout << '\n';
	}
	cout << endl;
}