	
#include <stdio.h>

int main(void)
{
	char str[256];
	gets(str);
	int flag=1;
	int i=0;
	int counter=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		flag=1;
		else if(flag==1)
		{
			counter++;
			flag=0;
		}
		i++;
	}
	printf("%d",counter);
}