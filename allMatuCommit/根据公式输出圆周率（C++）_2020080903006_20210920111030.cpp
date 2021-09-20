#include <stdio.h>
#include <iomanip>
#include<math.h>
#include <iostream>

using namespace std;
double chenfang(int i){//?????????1????-1
int x=i%2;
if(x==0)
return 1;
return -1;
}
double computePai()//????pai?
{
double pai=0;
for(int i=0;;i++){
double x= (double)1/(2*i+1);//?????
if( x <=10E-8){
        cout<<"steps="<<i<<" ";
        return 4*pai ;//????????????pai?
        }else{
pai += x*chenfang(i);//????????????
}
}
}
int main()
{
double pai=computePai();
cout<<fixed<<setprecision(5)<<"pi="<<pai;
return 0;
}