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
		if (i == 0)
		{
			printf("%c", s[0]);
		}
		else
		{
			if (!(s[i] == s[i - 1] && (s[i] < 49 || (s[i] > 57 && s[i] <= 64) || (s[i] >= 91 && s[i] <= 96) || s[i] >= 123)))
			{
				printf("%c", s[i]);
			}
		}
		i++;
		scanf_s("%c", &c);
	}
}