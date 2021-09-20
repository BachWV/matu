#include <stdio.h>
int main(void){
	double x=0,n=0,sum=0,t=1,num=0;
	scanf("%lf %lf",&x,&n);
	if (n>0){
		for (num=1;num<(n+2);num++){
			sum+=t;
			t*=(x/num);
		}
		printf("%f",sum);
	}else{
		printf("error");
	}
	return 0;
}