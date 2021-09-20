#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x<3)
	{
		printf("error");
		return 0;
	}
	int a,b,c,i;
	a=(x+1)/2;
	b=0;//?????? 
	for(i=2;i<=a;i++)//??จน??? 
	{
		if((x%i)==0)
		{
			b=1;
		}
	}
	if(b==1)
	{
		printf("no");
		return 0;
	}
	else
	{
		printf("yes");
		return 0;
	}
}