#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	char ch[5];
	for (int i = 0; i < 5; i++)
	{
		scanf("%c", &ch[i]);
		ch[i] += 4;
	}
	for (int i = 0; i < 5; i++)
	{
		putchar(ch[i]);
		
	}
	putchar('\n');
	for (int i = 0; i < 5; i++)
	{
		printf("%c", ch[i]);

	}

	system("pause");
	return 0;
}
