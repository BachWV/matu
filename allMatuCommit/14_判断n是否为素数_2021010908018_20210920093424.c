#include <stdio.h>
#include <math.h>
/*int sqr(int a){
	int i;
	for (i=1;i*i<a;i++){
		;
	}
	return i;
}*/
int main(){
	int input=0,isprime=1;
	scanf("%d",&input);
	int k=sqrt(input);
	int i=2;
	if (input>3){
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
	}else{
		printf("error");
	}
	return 0;
}
