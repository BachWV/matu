#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
void main()
{
	float m, k, i = 2;
	scanf("%f", &m);
	if (m - (int)m != 0)
	printf("error");
	else k = sqrt(m);
		while (i <= k)
		{
			if ((int)m % (int)i == 0)break;
			i++;
		}
		if (i >= (k + 1))printf("yes");
		else printf("no");
}