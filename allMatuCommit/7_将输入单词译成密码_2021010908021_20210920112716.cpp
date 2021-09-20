#include<stdio.h>
int main()
{
	char ch=getchar();
	
	while(ch >= 65 && ch <= 86 || ch >= 97 && ch <= 118)
	{
		putchar(ch + 4);
		
	}
	while(ch > 86 && ch <= 90 || ch > 118 && ch <= 122)
	{
		putchar(ch - 22);
		
	}
}
