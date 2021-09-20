#include<stdio.h>
int main()
{
	int i = 1;
	for (i = 1; i <= 20; i++)
	{
		char x;
		scanf_s("%c", &x);
		printf("%c", x);
	}
	return 0;
}