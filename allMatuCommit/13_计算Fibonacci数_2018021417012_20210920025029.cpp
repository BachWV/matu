#include<stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);
	int F1 = 1, F2 = 1,F3;
	if (n == 1 || n == 2) {
		printf("1");return 0;
	}
	for (int i = 2;i < n;i++) {
		F3 = F1 + F2;
		F1 = F2;
		F2 = F3;
	}
	printf("%d", F3);
	return 0;

}