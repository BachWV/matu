#include <stdio.h>
int main(void){
	unsigned int m=0,sum=1,count=0;
	scanf("%u",&m);
	if (m>4294967294){
		printf("%u",31);
	}
	while (sum<=m && m<4294967295){
		sum*=2;
		count++;
	}
	if (m<4294967295){
		printf("%u",count-1);
	}
	return 0;
}