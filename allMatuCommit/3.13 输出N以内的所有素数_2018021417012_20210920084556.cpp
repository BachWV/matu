#include<stdio.h>
#include<math.h>

#define N 10000

int main() {
	int n;
	scanf_s("%d", &n);
	if (n <= 1|| !(int)n==n) {
		printf("error");
		return 0;
	}
	int prime[N] = { 0 },
		flag[N] = { 0 },
		i, j, count;
	for (i = 2, count = 0;i <= n;i++) {
		if (!flag[i])
			prime[count++] = i;
		for (j = 2 * i;j <= n;j += i) {
			flag[j] = 1;
		}
	}
	printf("%d,", prime[0]);
	for (i = 1;i < count;i++) {
		printf("%d,", prime[i]);
	}

}