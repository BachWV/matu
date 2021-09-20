#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int RandInt(int i, int j);

void Swap(int*m,int*n){
	int x=*m;
	*m=*n;
	*n=x;
}
int A[10000];
void RandomPermutation1(int n)
{
	int i=0,ran,j;
		if(n<=0){
		printf("error");
		exit(-1);
	}
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
void RandomPermutation2(int n){
	int i=0,ran;
		if(n<=0){
		printf("error");
		exit(-1);
	}
	int used[10000];
	for(i=0;i<n;i++){
		ran=RandInt(1,n);
		while(used[ran]!=0){
			ran=RandInt(1,n);}
			A[i]=ran;
			used[ran]=1;
	}
		for(i=0;i<n;i++){
    	printf("%d,",A[i]);
	}
    printf("%d\n",0);
	}
void RandomPermutation3(int n){
	int i=0;
		if(n<=0){
		printf("error");
		exit(-1);
	}
	for(i=0;i<n;i++){
		A[i]=i+1;
	}
	for(i=0;i<n;i++)
    Swap(&A[i],&A[RandInt(0,i)]);
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
		exit(-1);
	}
	RandomPermutation1(n);
    RandomPermutation2(n);
	RandomPermutation3(n);
	return 0;
 } 