#include <stdio.h>

int main(void)
{
	int n;
	int w=1;
	int k=1;
	int q=0;
	scanf("%d",&n);
	if(n==1||n==2)
	{
		printf("1");
		return 0;
	}
	else
	{
		for(int i=2;i<n;i++)
		{
		   q=w+k;
		   k=w;
		   w=q; 
		}
		printf("%d",q);
		return 0;
	}
}