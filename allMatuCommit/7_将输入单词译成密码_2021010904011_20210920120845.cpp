#include<stdio.h>
#include<string.h>
int main()
{
    char s1[21],s2[1000000],s3[1];
    int i,m;
    gets(s2);
    m=strcmp(s2,s3);
    if(m<=0)
        printf("error");
    else
    strncpy(s1,s2,20);
    for (i=0;i<=19;i++)
    {
        if(s1[i]=='\0')
            break;
        if(s1[i]>='a'&&s1[i]<='z')
            s1[i]=(s1[i]-'a'+4)%26+'a';
        if(s1[i]>='A'&&s1[i]<='Z')
            s1[i]=(s1[i]-'A'+4)%26+'A';
        else s1[i]=s1[i];
        printf("%c",s1[i]);
    }
    return 0;
}