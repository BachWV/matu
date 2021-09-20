#include<stdio.h>
int main()
{
	int i = 0, n = 0;
	for (i = 0, n = 0; n <= 100; ++i)
	{
		n = 10 * i + 6;
		if (n % 3 != 0)continue;
		printf("%d ", n);
	}
	return 0;
}