#include<stdio.h>

int main()
{
	int i = 1, n = 100;
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 1)printf("%d,", i);
		else continue;
	}
	return 0;
}