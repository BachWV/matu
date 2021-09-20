#include <iostream>
#include<map>
#include<string>
#include<cmath>
using namespace std;
typedef class pt{
	public:
	double x,y;
	
	pt(double xx,double yy){
		x=xx;
		y=yy;
	}
	
	double Distance(pt &b){
		double dx=abs(x-b.x),dy=abs(y-b.y);
		return sqrt(dx*dx+dy*dy);
	}
}pt;

int main(){
    double a,b,c,d;
	cin>>a>>b>>c>>d;
	pt A(a,b),B(c,d);
	cout<<A.Distance(B)<<endl;
	return 0;
}