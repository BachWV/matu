#include <stdio.h>
int main()
{
	printf("????????????????????");
	int x, y, z, r, volume;
	r = scanf_s("%d%d%d", &x, &y, &z);
	if (r == 3)
	{
		volume = x * y * z;
		printf("??????%d\n", volume);
	}
	else
	{
		printf("error");
	}
	return 0;
}

		