#include<stdio.h>
#include<math.h>
void main()
{
	int n ,temp;
	double i;
	scanf_s("%d", &n);
	for (i = 1; i < 5; i++)
	{
		temp = (int)pow((double)n, (double)i);
		printf("%d ", temp);
	}
	temp = (int)pow((double)n, (double)5);
	printf("%d", temp);
	printf("\n");

}