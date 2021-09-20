#include<stdio.h>
int main(void)
{
	double x, n,y,m,t;
	double i;
	m = 1;
	y = 1;
	scanf_s("%lf %lf", &x, &n);
	if (n < 0)
		printf("error");
	else
	{
		for (i = 1;i < n+1 ;i++)
		{
			t = 1 * i;
			m = m * x / t;
			y = y+ m;
		}
		printf("%.6f", y);
	}
	return 0;
}