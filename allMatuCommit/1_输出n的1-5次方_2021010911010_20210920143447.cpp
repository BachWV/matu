#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d %d %d %d %d\n", n, n * n, n * n * n, n * n * n * n, n * n * n * n * n);
	return 0;
}