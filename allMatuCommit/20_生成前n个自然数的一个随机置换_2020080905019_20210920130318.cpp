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
	scanf_s("%d", &n);
	if (n <= 0) { printf("error");exit(-1); }
	RandomPermutation1(n);
	RandomPermutation2(n);
	RandomPermutation3(n);
	return 0;
}
void RandomPermutation1(int n)
{
	int x;
	int* a = NULL;
	if (n <= 0) { printf("error");exit(-1); }
	a = (int*)malloc(sizeof(int) * n);
	if (NULL == a) { printf("error");exit(-1); }
	for (int i = 0;i < n;i++)
	{
		x = RandInt(1, n);
		for (int j = 0;j < i;j++)
		{
			if (x == a[j])
			{
				x = RandInt(1, n);
				j = -1;
			}
		}
		a[i] = x;
	}
	for (int i = 0;i < n;i++)
	{
		printf("%d,", a[i]);
		if (i == n - 1)printf("\n");
	}
}
void RandomPermutation2(int n)
{
	int x;
	if (n <= 0) { printf("error");exit(-1); }
	int* b = NULL;
	b = (int*)malloc(sizeof(int) * n);
	if (NULL == b) { printf("error");exit(-1); }
	int* used = NULL;
	used = (int*)malloc(sizeof(int) * n);
	if (NULL == used) { printf("error");exit(-1); }
	for (int i = 1;i <= n;++i) used[i] = 0;
	for (int i = 0;i < n;i++)
	{
		x = RandInt(1, n);
		while (used[x] != 0)
			x = RandInt(1, n);
		b[i] = x;
		used[x] = 1;
	}
	for (int i = 0;i < n;i++)
	{
		printf("%d,", b[i]);
		if (i == n - 1)printf("\n");
	}
}
void swap(int* m, int* n)
{
	int x =* m;
	*m = *n;
	*n = x;
}
void RandomPermutation3(int n)
{
	int* c = NULL;
	if (n <= 0) { printf("error");exit(-1); }
	c = (int*)malloc(sizeof(int) * n);
	if (NULL == c) { printf("error");exit(-1); }
	for (int i = 0;i < n;i++)
	{
		c[i] = i + 1;
	}
	for (int i = 1;i < n;i++)
	{
		swap(&c[i], &c[RandInt(0, i)]);
	}
	for (int i = 0;i < n;i++)
	{
		printf("%d,", c[i]);
		if (i == n - 1)printf("\n");
	}
}