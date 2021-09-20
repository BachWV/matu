#include<iostream>
#include<cstdio>
using namespace std;
void Matrix_Mul(int a[3][2], int b[2][4])
{

	int n = 0, m = 0,g=0,h=0,t=0,x;
	int c[3][4] ;
	for (int i = 0; i < 3; i++)
	     {
		     for (int j = 0; j < 4; j++)
				{
				 c[i][j] = 0;
				    for (int m = 0; m < 2; m++)
					{
						c[i][j] += a[i][m] * b[m][j];
					}


				}

	     }
	
	for (int i = 0; i < 3; i++)
	{
		for (int m = 0; m < 4; m++)
		{
			cout << c[i][m] << ' ';
		}
		cout << endl;
	}

}
int main()
{
	int i, j, m,a[3][2],b[2][4],c[3][4];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cin >> a[i][j];
		}

	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			cin >> b[i][j];
		}

	}
	Matrix_Mul(a, b);
	return 0;
}