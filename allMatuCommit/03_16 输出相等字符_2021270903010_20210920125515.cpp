#include<stdio.h>
char x[] = "programming";
char y[] = "Fortran";
void main() 
{
	int i = 0l;
	while (x[i] != '\0' && y[i] != '\0')
	{
		if (x[i] == y[i])
		{
			putchar(x[i]);  x[i]=getchar();    
		}		
		else i++;
	}
}
