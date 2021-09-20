#include<map>
#include<set>
#include<cmath>
#include<ctime>
#include<queue>
#include<stack>
#include<bitset>
#include<cstdio>
#include<vector>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<string>
#define ll long long
#define fo(i,a,b) for(register ll i=a;i<=b;++i)
#define fd(i,a,b) for(register ll i=a;i>=b;--i)
using namespace std;

double x,ans=1.0,a[1000];
int n;

int main(){
	scanf("%lf%d",&x,&n);
	if(n<0){
		printf("error");
		return 0;
	}
	if(n==0){
		printf("1.000000");
		return 0;
	}
	a[0]=1.0;
	for(int i=1;i<=n;i++){
		a[i]=a[i-1]*i;
	}
	for(int i=1;i<=n;i++){
		ans+=(double)pow(x,(double)(i))/(double)a[i];
	}
	printf("%.6lf\n",ans);
	return 0;
}