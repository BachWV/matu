#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	float pi = 1, item = 1, i = 1, diff = 0;
	scanf("%f", &diff);
	while (item * 2 > diff)
	{
		item *= i / (2.0f * i + 1);
		pi += item;
		i++;
	}
	printf("%.6f", pi * 2);
	return 1;
}