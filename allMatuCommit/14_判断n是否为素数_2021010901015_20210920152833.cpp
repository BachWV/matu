#include<stdio.h>
int main(void)
{
	int a, i;
	scanf("%d", &a);
	if (a>3)
	{
		for (i = 2; i < a; i++)
			if (a % i == 0)break;
		if (i < a)printf("no");

		else printf("yes");
	}
	else printf("error");
	


	return 0;
}
