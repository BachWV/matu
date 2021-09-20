#include<stdio.h>
int main()
{
	unsigned int m,sum=1,i=0;
	scanf_s("%u", &m);
	while (sum < m)
	{
	
		sum *= 2;
		i++;
	}
	if (sum > m)
		i -= 1;
	printf("%u\n", i);



	return 0;
}