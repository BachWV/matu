#include<stdio.h>
#include<math.h>

void minmax(int s[]) {
	int min = s[0], max = s[0], count = 0;
	for (int i = 0;i < 10;i++) {
		if (s[i] > max) max = s[i];
		if (s[i] < min) min = s[i];
		count += s[i];
	}
	printf("%d,%d,%d", min, max, count / 10);
}


void main() {
	int s[10];
	for (int i = 0;i < 10;i++) {
		scanf_s("%d", &s[i]);
	}
	minmax(s);
	
}