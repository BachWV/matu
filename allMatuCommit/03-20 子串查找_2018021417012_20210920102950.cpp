#include<stdio.h>

int index(char s[], char t[])
{
	int i, j, k;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == t[0]) { 			int flag = 0; 			for (j = 0; s[j + i] != '\0' && t[j] != '\0'; j++) { 				if (s[j + i] != t[j]) { 					flag = 1; 				} 			} 			if (flag == 0) return i; 		}
	}
	return(-1);
}

int main()
{
	static char src[256];
	static char dst[256];
	
	gets(src);
	gets(dst);
	
	printf("%d", index(src, dst));

	return 0;
}
