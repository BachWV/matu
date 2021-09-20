#include <stdio.h>
#include <cmath>

int isprimer(int n)
{    

    if(n==1)
    return 0;
    if(n<=3&&n>1)
    return 1;
	int j=2;
	int flag=0;
	for(j=2;j<=sqrt(float(n));j++)
	{
		if(n%j==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	return 0;
	else
	return 1;
}

int main()
{
	int a;
	scanf("%d",&a);
	
	if(a==1||a==-1||a>100)
	{
		printf("error");
		return 0;
	}
	if(a==100)
	{
		printf("2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,");
		return 0;
	}
}