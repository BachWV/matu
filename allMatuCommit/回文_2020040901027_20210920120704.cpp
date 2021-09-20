#include <stdio.h>
#define N 30
#include <string.h>
int main(void)
{
	char a[N];
	int i,j,n;
	gets(a);
	n=strlen(a);
	for(j=0,i=n-1;j<i;j++,i--)
	    if(a[j]!=a[i])
	    break;
	if(j>=i)
	printf("true");
	else
	printf("false");
	return 0;
}