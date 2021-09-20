#include <stdio.h>
#include <string.h>

void* reversememcpy(void* destination, const void* source, int num)
{
	char des = (char)destination;//??????????des?????????
	char src = (char)source;//???
	int i;
	if (!(des == NULL || src == NULL || num < 0))
	{
		if (des >= src && des <= src + num - 1
			|| src >= des && src <= des + num - 1)
		{
		printf("error");
		return NULL;
		}
		for (i = 0; i < num; ++i)//???????????????????§Ú????
		{
			des[num - i - 1] = src[i];
		}
		return des;
	}
	else
	{
		printf("error");
		return des;
	}

}