#include<iostream>
using namespace std;
void Matrix_Mul(int a[3][2], int b[2][4])
{
	int arr[3][4] = {0};
	int i, j, k;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			for (k = 0; k < 2; k++) {
				arr[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
}