#include <iostream>
#include<map>
#include<string>
#include<cmath>
using namespace std;
typedef class Ct {
	public:
		double a,b,c;
		
		Ct(double aa,double bb,double cc){
			a=aa;
			b=bb;
			c=cc;
		}
		
		void display(){
			cout<<"Ctriangle:a="<<a<<",b="<<b<<",c="<<c<<endl;
		}
		
		double GetPerimeter(){
			return a+b+c;
		}
		
		double GetArea(){
			double p=(a+b+c)/2;
			return sqrt(p*(p-a)*(p-b)*(p-c));
		}
} Ct;

int main(){
	double a,b,c;
	cin>>a>>b>>c;
	Ct T(a,b,c);
	T.display();
	cout<<"Perimeter:"<<T.GetPerimeter()<<endl;
	cout<<"Area:"<<T.GetArea()<<endl;
	return 0;	 
}