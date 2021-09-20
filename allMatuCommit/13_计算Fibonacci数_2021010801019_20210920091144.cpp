#include<stdio.h>
int main()
{
	int x[100] = { 0,1,1 };
	int j;
	scanf("%d", &j);
	for (int i = 3; i <= j; i++) {
		x[i] = x[i - 1] + x[i - 2];
	}
	printf("%d", x, j);
	return 0;
}