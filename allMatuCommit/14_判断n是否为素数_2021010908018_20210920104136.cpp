#include <stdio.h>
int sqr(unsigned int a){
	int i;
	for (i=1;i*i<a;i++){
		;
	}
	return i;
}
int main(){
	int isprime=1,t=1;
	unsigned int input=0;
	scanf("%u",&input);
	int k=sqr(input);
	int i=2;
	if (input>3 && t==1){
		for (i=2;i<=k;i++){
			if (input%i==0){
				isprime=0;
				break;	
			}
		}
		switch (isprime){
		case 1:
			printf("yes");
			break;
		case 0:
			printf("no");
		}
	}else if (t==1){
		printf("error");
	}
	return 0;
}