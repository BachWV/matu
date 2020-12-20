#include <stdio.h>
#include <string.h>

#include<time.h>
#include <iostream>
using namespace std;
//firsi_change
//second_change

int main() {
	int a[11] = { 0 }, temp, n = 0;
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
		if (a[i] < 0)break;
		n++;
	}
	for (int i = 0; i < n - 1; i++) {

		for (int j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			cout << a[i] << " ";
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			cout << a[i] << " ";
		}
	}

}