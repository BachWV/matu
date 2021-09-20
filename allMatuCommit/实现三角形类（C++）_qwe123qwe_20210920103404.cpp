#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
#include<string.h>
using namespace std;
typedef long long int ll;

class Ctriangle{
	private :
		int a,b,c;
	public:
		int GetPerimeter()
		{
			return a+b+c;
		}
		int GetArea()
		{
			double len=(a+b+c)*1.0/2;
			double ans=0;
			ans=sqrt(len*(len-a)*(len-b)*(len-c));
			
			
			return ans;
		}
		void display()
		{
			cout<<"Ctriangle:a="<<a<<",b="<<b<<",c="<<c<<endl;
		}
		Ctriangle(int aa,int bb,int cc)
		{
			a=aa;
			b=bb;
			c=cc;
		}
			
};
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	Ctriangle T(a,b,c);
	T.display() ;
	cout<<"Perimeter:"<<T.GetPerimeter()<<endl;
	cout<<"Area:"<<T.GetArea()<<endl;
	return 0;
}