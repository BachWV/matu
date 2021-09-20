#include<stdio.h>
#include<math.h>
void main()
{
	int n ,temp;
	double i;
	scanf_s("%d", &n);
	for (i = 1; i < 6; i++)
	{
		temp = (int)pow((double)n, (double)i);
		printf("%d ", temp);
	}
	printf("\r");

}