#include<stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%d, %d, %d", &a, &b, &c);
	if (a <= 0 || b <= 0 || c <= 0) //?§Ø???????????
	{
		printf("error");
		return 0;
	}
	if (a + b > c && a + c > b && b + c > a)
		printf("yes");
	else
		printf("no");
	return 0;
}