#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	if (a <= 3)printf("error");
	else if (a ==5||  a==7)printf("yes");
	 if ((a > 7) &&( a % 2 != 0) &&( a % 3 != 0) &&(a % 5 != 0) && (a % 7 != 0))
		printf("yes");
	else printf("no");
		return 0;
}