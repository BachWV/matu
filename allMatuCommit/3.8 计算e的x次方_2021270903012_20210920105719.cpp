#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	double result=0, x, n, k = 1,f=1,sum,a;
	int i = 1;
	scanf_s("%.6lf\n%.6lf\n", &x, &n);
	if (n < 0)
	printf("error");
	else 
	{
		for (i = 1; i <= n; i++)
		{
			a = pow((double)x, (double)i);
			k = k * i;
			sum = a / k;
			result += sum;
		}
		printf("%.6lf", result);
	}

		return 0;
		system("pause");
}