#include<stdio.h>
int main(void)
{
	unsigned int m, k, y;
	y = 1;
	k = -1;
	scanf_s("%u", &m);
	do
	{
		y = y * 2;
		k = k + 1;
	}
	while (y <= m);
	printf("%u", k);
	return 0;
}