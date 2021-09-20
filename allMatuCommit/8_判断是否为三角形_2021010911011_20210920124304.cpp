#include<stdio.h>
int main()
{
	int a, b, c,d;
	printf("please input three int numbers:");
	scanf_s("%d,%d,%d,", &a, &b, &c);
	if (a > 0 && b > 0 && c > 0) {
		d = (a >= b) ? (a >= c ? a : c) : (b > c ? b : c);
		if ((a + b + c - d - d) > 0)printf("yes");
		else printf("no");
	}
	else printf("error");
	return 0;
}