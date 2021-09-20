#include <stdio.h>
int main(void){
	unsigned int m=0,sum=1,count=0;
	scanf("%u",&m);
	while (sum<=m){
		sum*=2;
		count++;
	}
	printf("%u",count-1);
	return 0;
}