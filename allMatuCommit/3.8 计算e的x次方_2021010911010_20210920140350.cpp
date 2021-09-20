#include<stdio.h>
int main()
{
	double sum, x, n, b;
	int i;

	scanf_s("%lf %lf", &x, &n);
	if (n >= 0)
	{

		for (i = 1, sum = 1, b = 1; i <= n; i++)
		{
			b = b * (x / i);
			sum = sum + b;
		}

		printf("%.6lf\n", sum);
	}
	else
		printf("error\n");

	return 0;
}