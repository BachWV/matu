#include<stdio.h>
#include<math.h>

int main() {
	char s[50];
	char c;
	scanf_s("%c", &c);
	int i = 0;
	while (c != 10)
	{
		s[i] = c;
		i++;
		scanf_s("%c", &c);
	}
	printf("%c", s[0]);
	for (int j = 1;j < i;j++)
	{
		if (!(s[j] == s[j - 1] && (s[j] < 49 || (s[j] > 57 && s[j] <= 64) || (s[j] >= 91 && s[j] <= 96) || s[j] >= 123)))
		{
			printf("%c", s[j]);
		}
	}
}