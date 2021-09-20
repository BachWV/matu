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
	int input=0,isprime=1;
	scanf("%d",&input);
	int k=sqr(input);
	int i=2;
	if (input>3 && input%2!=0){
		for (i=3;i<=k;i++){
			if (input%i==0)
				isprime=0;	
		}
		switch (isprime){
		case 1:
			printf("yes");
			break;
		case 0:
			printf("no");
		}
	}else if(input>3){
		printf("no");
	}else{
		printf("error");
	}
	return 0;
}