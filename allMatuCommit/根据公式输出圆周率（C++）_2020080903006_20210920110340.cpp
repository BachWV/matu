#include <iostream>
#include <fstream>
#include <iomanip>
#include<math.h>

using namespace std;
int main()
{
int sign=1;
long step=0;
double s=0,pi,t,d,c;
double i,n,j=1; //????????double
for(i=2,n=1;fabs(1/n)>1e-8;i++,n+=2){
s=s+sign*j/n; //?????????????¦Å??????????????
sign=-sign;
step++;
}
cout<<"steps="<<step<<" ";
cout<<fixed<<setprecision(5)<<"pi="<<s*4;
return 0;
}