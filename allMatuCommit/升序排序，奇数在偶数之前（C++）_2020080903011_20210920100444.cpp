#include<iostream>
using namespace std;
int main()
{
	int a[10] = {0}, i = 0,temp;
	for (i = 0; i < 10; i++) {
		cin >> temp;
		if (temp >= 0) {
			a[i] = temp;
		}
		else {
			break;
		}
	}
	int len = sizeof(a) / sizeof(a[0]);
	int  j;
	for (i = 1; i < len; i++) {
		for (j = 0; j < len - 1; j++) {
			if (a[j] > a[j + 1]) {
				int temp = 0;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < len; i++) {
		if (a[i] % 2 == 1) {
			cout << a[i] << " ";
		}
	}
	for (i = 0; i < len; i++) {
		if (a[i] % 2 == 0 && a[i] != 0) {
			cout << a[i] << " ";
		}
	}
	return 0;
}