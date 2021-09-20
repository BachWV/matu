#include<stdio.h>
#include<math.h>

#define N 100

int main() {
	char s[N];
	char c;
	scanf_s("%c", &c);
	int i = 0;
	int count = 0;
	while (c != 10) {
		s[i] = c;
		if (i == 0) {
			if (s[i] != ' ')
				count++;
		}
		else{
			if (s[i] != ' ' && s[i - 1] == ' ')
				count++;
		}
		i++;
		scanf_s("%c", &c);
	}
	printf("%d", count);
}