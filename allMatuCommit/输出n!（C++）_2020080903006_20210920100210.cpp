#include<iostream>
using namespace std;
int main(){
	int n;
	int j=1;
	cin>>n;
	if(n>2147483647){
		return 0;
	}else{
		for(int i=1;i<=n;i++){
			j=j*i;
		}
		cout<<n<<"!="<<j;
	}
	return 0;
}