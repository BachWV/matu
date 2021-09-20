#include<stdio.h>
#include<math.h>

#define N 30

int main() {
	char s[N];
	char c;
	scanf_s("%c", &c);
	int i = 0;
	while (c != 10) {
		s[i] = c;
		i++;
		scanf_s("%c", &c);
	}
	for (int j = i-1;j>=0;j--) {
			printf("%c",s[j]);
	}

}