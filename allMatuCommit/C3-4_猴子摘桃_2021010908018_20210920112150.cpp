#include <stdio.h>
int main(void){
	int i,sum=1;
	for (i=1;i<10;i++){
		sum=2*(sum+1);
		printf("%d,",sum);
	}
	printf("%d",sum);
	return 0;
}