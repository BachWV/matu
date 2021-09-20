#include <stdio.h>
int main(void)
{
	int N,i,j;
	scanf("%d",&N);
	if(N=='a'||N<=0)
	printf("error");
	else
	for(i=2;i<=N;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			break;
		}
		if(j>=i)
		printf("%d,",i); 
	}return 0;
}