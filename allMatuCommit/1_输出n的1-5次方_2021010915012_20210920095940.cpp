#include<stdio.h>

int main()
{
	int m = 1;
	int n ;
	scanf_s("%d",&n);
	for (int i = 1; i < 6; i++)
	{
		m *= n;
		printf("%d \n", m);
	}
	return 0;
}