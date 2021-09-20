#include<stdio.h>
int main()
{
	int i, n,N=1;
	scanf_s("%d", &n);
	for (i = 1; i <=5; i++)
	{
		N = N * n;
		printf("%d ", N);
	}
	return 0;
}