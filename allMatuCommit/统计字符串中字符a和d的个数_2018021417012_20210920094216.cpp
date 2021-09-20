#include<stdio.h>
#include<math.h>


#define N 100


int main() {
	char s[N];
	char c;
	scanf_s("%c", &c);
	int i = 0;
	int counta = 0;
	int countd = 0;
	while (c != 10) {
		s[i] = c;
		i++;
		if (c == 'a') counta++;
		if (c == 'd') countd++;
		scanf_s("%c", &c);
	}
	printf("a:%d,d:%d", counta,countd);
}

