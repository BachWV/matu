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

int a=1;

int main(){
	for(int i=9;i>=1;i--){
		a=a*2+2;
		printf("%d ",a);
	}
	printf("\n");
	return 0;
}