#include<stdio.h>
#include<math.h>

int main() {
	char s[30];
	char c;
	scanf_s("%c", &c);
	int i = 0;
	while (c != 10) {
		s[i] = c;
		i++;
		scanf_s("%c", &c);
	}
	for (int j = 0;j < i / 2;j++) {
		if (s[j] != s[i - j - 1]) {
			printf("false");return 0;
		}
	}
	printf("true");

}