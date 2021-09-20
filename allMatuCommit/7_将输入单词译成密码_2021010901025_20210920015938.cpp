#include<stdio.h>
#include<string.h>
void M(int a, int b)
{
	int p;
	if (a > b)
	{
		p = b; b = a; a = p;
	}
}
int main(void)
{
	char AO[100];
	int i, Q, L, QZ, QJ;
	int nt = 20;
	gets(AO);
	L = strlen(AO);
	if(L>=20)
	AO[20] = '\0';
	M(L, nt);
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
	}printf("%s", AO);
	LOOP:return 0;
}