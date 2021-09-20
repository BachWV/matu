#include<stdio.h>
int main()
{
	char ch;
	if (scanf("%c", &ch) == 0)
		printf("error");
	while(ch >= 65 && ch <= 86 || ch >= 97 && ch <= 118)
	{
		putchar(ch + 4);
		
	}
	while(ch > 86 && ch <= 90 || ch > 118 && ch <= 122)
	{
		putchar(ch - 22);
		
	}
}
