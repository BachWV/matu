#include<stdio.h>
#include<string.h>
int main(void)
{
	char AO[100];
	int i, Q, L, QZ, QJ;
	gets(AO);
	L = strlen(AO);
	if (L > 20)
		L = 20;
	for (i = 0; i <= L-1; i++)
	{
		Q = (int)AO[i];
			if (L == 0 || Q < 65 || Q > 122)
			{
				printf("error");
				goto LOOP;
			}

	}
	for (i = 0; i <= L - 1; i++)
	{
		Q = (int)AO[i];
		QZ = Q + 4, QJ = Q - 22;
		if (AO[i] != 'w' && AO[i] != 'W' && AO[i] != 'x' &&AO[i] != 'X' && AO[i] != 'y' &&AO[i] != 'Y' &&AO[i] != 'z' && AO[i] != 'Z')
		{
			AO[i] = (char)QZ;
		}
		else { AO[i] = (char)QJ; }
	}
	for (i = 0; i <= L - 1; i++)
		printf("%c",AO[i]);
	LOOP:return 0;
}