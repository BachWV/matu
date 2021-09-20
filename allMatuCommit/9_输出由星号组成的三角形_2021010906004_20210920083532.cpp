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

int n;
int main(){
	scanf("%d",&n);
	if(n%2==0){
		printf("error");
		return 0;
	}
	for(int i=1;i<n;i+=2){
		int k=(n-i)/2;
		for(int j=1;j<=k;j++){
			printf(" ");
		}
		for(int j=1;j<=i;j++)printf("*");
		for(int j=1;j<=k;j++){
			printf(" ");
		}
		printf("\n");
	}
	for(int i=1;i<=n;i++){
		printf("*");
	}
	printf("\n");
	return 0;
}