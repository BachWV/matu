#include<stdio.h>
#include<math.h>
int prime(int i);
int main()
{
	int i, n, jishu = 1;

	int te = scanf("%d",&n);
	if (te < 1||n<=1) printf("error");
	else{
		int a[100] = { 2 };

		for (i = 3; i <= n; i = i + 2) {
			if (prime(i)) {
				a[jishu] = i;
				jishu++;
			}
		}
		for (i = 0; i < jishu; i++) {
			printf("%d,", a[i]);
		}
	}
	return 0;
}
		
int prime(int i) {
	int j,ret=1;
	for (j = 3; j <=sqrt((double)i); j = j + 2) {
		if ((i %j )==0) {
			ret = 0;
			break;
		}
	}
	return ret;
}
