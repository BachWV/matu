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

int a;
bool v[100009],flg;

int main(){
	scanf("%d",&a);
	for(int i=2;i<=a;i++){
		if(v[i])continue;
		printf("%d,",i);flg=1;
		int k=a/i;
		for(int j=1;j<=k;j++){
			v[i*j]=1;
		}
	}
	if(!flg)printf("error");
}