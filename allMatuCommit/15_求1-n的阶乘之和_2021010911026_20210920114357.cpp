#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
void main()
{
	int x,i,t=1,sum=0;
	scanf("%d", &x);
	if (x>10)printf("error");
	else
	{
		i = 1;
		while (i <= x)
		{
			t = i * t;
			sum = sum + t;
			i++;
		}
		printf("%d", sum);
	}
}