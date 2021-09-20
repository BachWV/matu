#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int RandInt(int i, int j);


int A[10000];
void RandomPermutation1(int n)
{
	int i=0,ran,j;
	while(i<n)
{   ran=RandInt(1,n); 
    for(j=0;j<i;j++){
    	if(A[j]==ran)
    	break;
}
	if(j==i){
		A[j]=ran;
		i++;
	}	
}
    for(i=0;i<n;i++){
    	printf("%d,",A[i]);
	}
	printf("%d\n",0);
}

int main()
{
	int n;
	srand((unsigned)time(NULL));
	scanf("%d",&n);
	if(n<=0){
		printf("error");
	}
	RandomPermutation1(n);
  
	return 0;
 } 