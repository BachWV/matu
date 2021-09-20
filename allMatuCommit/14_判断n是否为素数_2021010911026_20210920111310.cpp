#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
void main()
{
	double m;
	long long n,k,i = 2;
	scanf("%lf", &m);
	if (m - (int)m != 0)  printf("error");
	else    
	n = m;
	k = sqrt(n);
		while (i <= k)
		{
			if (n % i == 0)break;
			i++;
		}
		if (i >= (k + 1))printf("yes");
		else printf("no");
}