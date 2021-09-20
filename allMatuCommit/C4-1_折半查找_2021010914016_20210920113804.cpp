#include<stdio.h>
int main(){
	int n,i,flag,number;
	scanf("%d",&n);
	int s[n],left=0,right=n-1;
	for(i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	scanf("%d",&number);
	while(s[flag]!=number){ 
		flag=(left+right)/2;
		printf("%d",flag) ;
		if(number>s[flag]){
			left=flag;
		}
		else if(number<s[flag]){
			right=flag;
		}
	}
	printf("%d",flag+1) ;
	return 0;
}
