#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a[3][2] = { 0 }, b[2][4] = { 0 },i=0,j=0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cin>> a[i][j];
		}

	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			cin >> b[i][j];
		}

	}
	int n = 0, m = 0,g=0,h=0,t=0,x;
	int c[3][4] = { 0 };
	for (i = 0; i < 3; i++)//?????????i????a???§µ?j????a???§µ?n????b???§µ?m????b????,g????c???§µ?h????c????//
	     {
		     for (j = 0; j < 2; j++)
				{
				    for (m = 0; m < 4; m++)
					{
						t = a[i][j] * b[0][m];
						x = a[i][j] * b[1][m];
						c[i][m] = t + x;
					 }


				}

	     }
	for (i = 0; i< 3; i++)
	{
		for (m = 0; m < 4; m++)
		{
			cout << c[i][m]<<' ';
		}
		cout << endl;
	}
	return 0;


}