#include<stdio.h>
int main()
{
	int n,m=1;
	scanf_s("%d",&n);
    for(int i=0 ; i<4 ; i++) 
	{
		m *= n;
		printf("%d ",m);
	}
	printf("%d\n",m*n);
	return 0;
}

