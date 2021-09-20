#include<stdio.h>
int main()
{
	char arr[256];
	int i;
	int num = 0;
	int word = 0;
	char c;
	gets(arr);
	for (i = 0; (c = arr[i]) != '\0'; i++)
	{
		if (c != ' ')
		{
			num++;
		}
	}
	printf("%d\n", num);
	return 0;
}