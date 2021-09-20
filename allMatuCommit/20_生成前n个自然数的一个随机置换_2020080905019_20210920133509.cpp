#include<stdio.h>
#include<stdlib.h>
#include<time.h>
extern int RandInt(int i, int j);
void RandomPermutation1(int n);
void RandomPermutation2(int n);
void RandomPermutation3(int n);
int n;
int main()
{
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
void RandomPermutation1(int n)
{
	int i=0,ran,j;
	if(n<=0){
		printf("error");
		exit(-1);
}
	int  *A=NULL;
	A = (int*)malloc(n * sizeof(int));
	if(NULL==A){
		printf("error");
			exit(-1);
	}
	for(i=0;i<n;i++)
{   ran=RandInt(1,n); 
    for(j=0;j<i;j++){
    	if(A[j]==ran){
    	ran=RandInt(1,n);
    	j=-1;}
}
	A[i]=ran;	
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
	int*b=NULL;
	b = (int*)malloc(n * sizeof(int));
	if(NULL==b){
		printf("error");
	    exit(-1);
	}
	int *used=NULL;
	used = (int*)malloc(n * sizeof(int));
	if(NULL==used){
		printf("error");
		exit(-1);
	}
	for(i=1;i<=n;++i){
	used[i]=0;}
	for(i=0;i<n;i++){
		ran=RandInt(1,n);
		while(used[ran]!=0){
			ran=RandInt(1,n);}
			b[i]=ran;
			used[ran]=1;
	}
		for(i=0;i<n;i++){
    	printf("%d,",b[i]);
	}
    printf("%d\n",0);
	}
void Swap(int*m,int*n){
	int x=*m;
	*m=*n;
	*n=x;
}	
void RandomPermutation3(int n){
	int i=0;
	if(n<=0){
		printf("error");
		exit(-1);
	}
	int*c=NULL;
	c = (int*)malloc(n * sizeof(int));
	if(NULL==c){
		printf("error");
		exit(-1);	
	}
	for(i=0;i<n;i++){
		c[i]=i+1;
	}
	for(i=0;i<n;i++)
    Swap(&c[i],&c[RandInt(0,i)]);
     for(i=0;i<n;i++){
    	printf("%d,",c[i]);
	}
	printf("%d\n",0);
}