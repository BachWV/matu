#include<iostream>
using namespace std;
int main(){
	int n;
	long j=1;
	cin>>n;
		for(int i=1;i<=n;i++){
			j=j*i;
		}
		if(j>2417483647){
		return 0;
	}else{
		cout<<n<<"!="<<j;
		}
	return 0;
}