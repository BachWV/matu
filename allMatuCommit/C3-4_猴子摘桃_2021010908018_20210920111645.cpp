#include <stdio.h>
int main(void){
	int i,sum;
	for (i=1;i<10;i++){
		sum=2*(sum+1);
	}
	printf("%d",sum);
	return 0;
}