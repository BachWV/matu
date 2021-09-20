#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
void main()
{
	double m;
	long long n,k,i = 2;
	scanf("%lf", &m);
	if (m - (long long)m != 0)  printf("error");
	else    
	n = m;
	long long j = 1;
	for (j = 1;; j++)
		if ((j+1)*(j+1) > n) break;
		while (i <= j)
		{
			if (n % i == 0)break;
			i++;
		}
		if (i >= (j + 1))printf("yes");
		else printf("no");
}