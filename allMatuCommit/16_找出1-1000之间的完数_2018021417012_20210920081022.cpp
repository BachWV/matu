#include<stdio.h>
#include<math.h>

int main() {
	for (int n = 1;n <= 1000;n++)
	{
		int s = (int)sqrt((double)n);
		int a[1001] = { 0 };
		for (int i = 1;i <= s;i++)
		{
			if (n % i == 0)
			{
				a[i] = 1;
				a[n / i] = 1;
			}
		}
		int sum = 0;
		for (int i = 1;i < n;i++)
		{
			if (a[i] == 1)
			{
				sum += i;
			}
		}
		if (sum == n)
		{
			printf("%d\n", n);
		}
	}
}