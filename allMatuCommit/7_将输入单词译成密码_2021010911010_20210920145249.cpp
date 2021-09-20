#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char a[21];
	gets(a);

		for (i = 0; a[i] != 0; i++)
	{
			if ((a[i] >= 'A' && a[i] <= 'V') || (a[i] >= 'a' && a[i] <= 'v'))
				printf("%c", a[i] + 4);
			else if ((a[i] >= 'W' && a[i] <= 'Z') || (a[i] >= 'w' && a[i] <= 'z'))
				printf("%c", a[i] - 20);
			else
				printf("error\n");
	}
	return 0;
}