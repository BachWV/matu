#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
void main()
{
	float m;
	int n,k,i = 2;
	scanf("%f", &m);
	if (m - (int)m != 0)  printf("error");
	else    k = sqrt(m);
	n = m;
		while (i <= k)
		{
			if (n % i == 0)break;
			i++;
		}
		if (i >= (k + 1))printf("yes");
		else printf("no");
}