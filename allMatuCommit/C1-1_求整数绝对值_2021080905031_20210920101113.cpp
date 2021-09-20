#include<stdio.h>
#include<stdlib.h>
int main()
{
	int numb, absolute, r;
	printf("???????????????");
	r = scanf("%d", &numb);
	if (r == 1)
	{
		if (numb > 0)absolute = numb;
		else absolute = -numb;
		printf("%d????????%d\n", numb, absolute);
	}
	else printf("??????? \n");
	system("pause");
	return 0;
}