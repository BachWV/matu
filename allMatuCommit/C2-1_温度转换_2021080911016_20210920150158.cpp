#include<stdio.h>
int main()
{
	int C;
	char F;
	scanf_s("%c", &F);
	C = 5 / 9 * (F - 32);
	printf("%d", C);
	return 0;
}