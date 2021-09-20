#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
#include<string.h>
#include<math.h>
#include<cmath>

using namespace std;
typedef long long int ll;

class Point{
	private :
		double x,y;
	public:
		Point(double a,double b)
		{
			x=a;y=b;
		}
		double Distance( Point const   &  b )
		{
			double ans=0;

			ans = sqrt( pow(x- b.x,2)+ pow(y- b.y,2 ) );
			return ans;
		}
};

int main()
{
	double a,b,c,d;
	cin>>a>>b>>c>>d;
	Point A(a,b),B(c,d);
	cout<<A.Distance(B)<<endl;
	return 0;
	
	double x=2.5;
	//cout<<pow(x,3)<<endl;
	return 0;
}