#include<stdio.h>
int main()
{
	double x;
	double n;
	double ex=1;
	double sum=1;
	
	int k=0;
	int m=0;
	int p=1;
	int s=0;
	scanf("%lf %lf",&x,&n);
	if(x<0||n<0)
	{printf("error");}
	else
	{
		for(m=1;m<=n;m++)
		{
			p=p*m;
		    sum=sum*x;
		    ex=ex+sum/p;
		}
	printf("%6lf",ex);
    }
}
