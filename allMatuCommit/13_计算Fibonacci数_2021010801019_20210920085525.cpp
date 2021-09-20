#include<stdio.h>
int main()
{
	int x[100] = { 0 };
	x[1] = 1, x[2] = 1;
	for (int i=3;; i++) {
		x[i] = x[i - 1] + x[i - 2];
	}
	int j;
	scanf("%d", &j);
	printf("%d", x,j);
	return 0;
}