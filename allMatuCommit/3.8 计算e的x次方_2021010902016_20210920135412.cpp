#include<stdio.h>
int main(void)
{
	float x, n,y,m,t;
	float i;
	m = 1;
	y = 1;
	scanf_s("%f %f", &x, &n);
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