#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,result=1,sum=0;
	scanf_s("%d", &n);
	if (1<=n<=10)
	{
		for (i = 1; i <= n; ++i)
		{
			result *= i;
			sum += result;

		}
		printf("%d", sum);
	}
	else printf("error");
	return 0;
	system("pause");
	}