#include <stdio.h>
#define N 30
int main(void)
{
	char a[N];
	int i,j,n;
	gets(a);
	for(i=0;i<N;i++)
	{
		n=0;
	    if(a[i]!='\0')
	    n++;
    }
	for(j=0;j<n;j++)
	{
	
	    if(a[j]==a[n-j-1])
	    printf("true");
	    else
	    printf("false");
	}return 0;
}