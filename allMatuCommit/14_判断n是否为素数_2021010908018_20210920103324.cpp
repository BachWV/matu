#include <stdio.h>
//#include <math.h>
int sqr(int a){
	int i;
	for (i=1;i*i<a;i++){
		;
	}
	return i;
}
int main(){
	int input=0,isprime=1,t=1;
	scanf("%d",&input);
	int k=sqr(input);
	int i=2;
	if (k==2147483646){
		printf("no");
		t--;
	}else if (k==2147483647){
		printf("yes");
		t--;
	}
	if (input>3 && t==1){
		for (i=2;i<=k;i++){
			if (input%i==0){
				isprime=0;
				break;	
			}
		}
		
		if (isprime){
			printf("yes");
		}else
			printf("no");
		
		
		/*switch (isprime){
		case 1:
			printf("yes");
			break;
		case 0:
			printf("no");
		}*/
	}else{
		printf("error");
	}
	return 0;
}