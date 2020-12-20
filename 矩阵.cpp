#include<iostream>
#include <stdio.h>
using namespace std;

void Matrix_Mul(int a[3][2], int b[2][4])
{
	int c[3][4];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			c[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j]; cout << c[i][j]<<" ";
		}cout << endl;
	}
}
int main() {
	int a[3][2]={{1,2},{3,4},{5,6}},b[2][4]={{1,0,1,1},{0,1,0,1} };
	Matrix_Mul(a,b);
}