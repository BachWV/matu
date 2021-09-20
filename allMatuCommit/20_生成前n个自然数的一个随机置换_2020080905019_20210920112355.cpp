#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void RandomPermutation1(int n);
void RandomPermutation2(int n);
void RandomPermutation3(int n);
void Swap(int* p, int* q);

int main()
{

	srand((unsigned)time(NULL));
	int n;
	scanf("%d", &n);
	
	RandomPermutation1(n);
	RandomPermutation2(n);
	RandomPermutation3(n);
	return 0;
}

void RandomPermutation1(int n)
{
	if (n <= 0) {
		printf("error");
		return;
	}
	int* p, i, j, m;
	p = (int*)malloc(n * sizeof(int));
	for (i = 0;i < n;i++)
	{
		
		m = RandInt(1, n);

		for (j = 0;j < i;j++)
		{
			if (m == p[j])
			{
				
				m = RandInt(1, n);
				j = -1;
				
			}

		}


		p[i] = m;
		
	}

	for (i = 0;i < n;i++)
	{
		printf("%d,", p[i]);//???????
	}
	printf("0\n");
}
void RandomPermutation2(int n)
{
	if (n <= 0) {
		printf("error");
		return;
	}
	int* Used = NULL, * p = NULL, i, m;
	Used = (int*)malloc(n * sizeof(int));
	for (i = 1;i <= n;i++)
	{
		Used[i] = 0;
	}
	p = (int*)malloc(n * sizeof(int));


	for (i = 0;i < n;i++)
	{
		m = RandInt(1, n);
		while(Used[m]!=0)
			m= RandInt(1, n);
		p[i] = m;
		Used[m] = 1;
		
	}
	for (i = 0;i < n;i++)
	{
		printf("%d,", p[i]);//???????
	}
	printf("0\n");
}
void RandomPermutation3(int n)
{
	if (n <= 0) {
		printf("error");
		return;
	}
	int* A = NULL, i;
	A = (int*)malloc(n * sizeof(int));//?????????????
	for (i = 0;i < n;i++)
	{
		A[i] = i + 1;//?????ԧ??1??n
	}
	for (i = 0;i < n;i++)
	{
		// Swap(&A[i], &A[rand() % (n)]);
		Swap(&A[i], &A[RandInt(0, n-1)]);//??A[i]??????????????A[RandInt(0, n)]???????
	}
	for (i = 0;i < n;i++)
	{
		printf("%d,", A[i]);//???????
	}
	printf("0\n");
}
void Swap(int* p, int* q) //???????????????
{
	int s;

	s = *p;
	*p = *q;
	*q = s;
}
int RandInt(int i, int j)		//srand()??????????????
{
	if (i == 0)
		return rand() % (j + 1);
	else
		return rand() % (j - i + 1) + i;
}