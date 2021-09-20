
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void insert(char *s1,char *s2,int n)
{
	int a1=strlen(s1),a2=strlen(s2);
	char* temp=(char *)malloc(sizeof(char)*(a1+a2));
	int i=0;
	int j=0;
	if(n>=0&&n<=a1&&s1!=NULL&&s2!=NULL)
	{
		for(;i<n;i++)
		{
			temp[i]=s1[i];
		}
		for(;j<a2;j++)
		{
			temp[i]=s2[j];
			i++;
		}
		for(int w=0;w<a1-n;w++)
		{
			temp[i]=s1[n+w];
			i++;
		}
		temp[i]='\0';
		for(int q=0;q<a1+a2;q++)
		{
			s1[q]=temp[i];
		}
		s1[a1+a2]='\0';
	}
	else
	{
		printf("error");
	}
}