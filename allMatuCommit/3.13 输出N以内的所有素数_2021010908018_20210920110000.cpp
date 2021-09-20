#include <stdio.h>
int main(void){
	int N=0;
	scanf("%d",&N);
	int i,j,isprime=1;
	if (N>1){
		for (i=2;i<=N;i++){
			isprime=1;
			for (j=2;j<i;j++){
			if (i%j==0)
				isprime=0;	
			}
			if (isprime)
				printf("%d,",i);
		}
	}else{
		printf("error");
	}
	return 0;
}