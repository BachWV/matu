#include<stdio.h>

double Factorial(double n);
double Pow(double n,int exp);
int main(void)
{
	double dN, dX, dF, dEx = 1;
	scanf("%lf %lf", &dX, &dN);
	int iN = (int)dN;
	if (dX > 0 && dN >= 0) 
	{
		for (;iN>=1;iN--)
		{
			dEx = dEx + Pow(dX,iN) / Factorial(iN);
		}
		printf("%.6lf", dEx);
	}
	else
	{
		printf("error");
	}
	return 0;
	
}
double Factorial(double n)
{
	int iNf=1,iNt=n;
	for (int iCon_1 = 1; iCon_1 <= n; iCon_1++)
	{
		iNf = iNf * (iNt--);
	}
	return (double)iNf;
}
double Pow(double n,int exp)
{
	double dResult = 1;
	for (int iCon_3=1; iCon_3 <= exp; iCon_3++)
	{
		dResult = dResult * n;
	}
	return dResult;
	
}