#include<iostream>
using namespace std;
int main(){
	int i;
	for(i=101;i<200;i++){
		if((i%3!=0)&&(i%7!=0)){
			cout<<i;
		}else{
			continue;
		}
	}
	return 0;
}
