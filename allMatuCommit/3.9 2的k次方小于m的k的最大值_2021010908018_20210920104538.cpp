#include <stdio.h>
int main(void){
	unsigned long m=0,sum=1,count=0;
	scanf("%ul",&m);
	while (sum<=m){
		sum*=2;
		count++;
	}
	printf("%ul",count-1);
	return 0;
}