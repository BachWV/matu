#include<iostream>
using namespace std;
int main(){
	int odd[10];
	int even[10];
	int num[10];
	int n=0,i=0,on=0,en=0,j=0,temp;
	while((n<10)){
		cin>>num[i];
	 if(num[i]<=0){
	 	break;
	 }
	i++;
	n++;
	}
	for(i=0;i<n;i++){
		if(num[i]%2==0){
			even[on]=num[i];
			on++;
		}else{
			odd[en]=num[i]; //en????????? ??en?????????? 
			en++;
		}
	}
	for(i=0;i<on;i++){
		for(j=0;j<on-i-1;j++){
			if(odd[j]>odd[j+1]){
				temp=odd[j];
				odd[j]=odd[j+1];
				odd[j+1]=temp;
			}
		}
	}
	for(i=0;i<en;i++){
		for(j=0;j<en-i-1;j++){
			if(even[j]>even[j+1]){
				temp=even[j];
				even[j]=even[j+1];
				even[j+1]=temp;
			}
		}
	}
	for(i=0;i<on;i++){
		cout<<odd[i]<<" ";
	}
	for(i=0;i<en;i++){
		cout<<even[i]<<" ";
	}
	return 0;
}