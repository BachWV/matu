#include<stdio.h>
void del(char * s,int n,int len)
{char *p;
 s+=n;
 for(p=s+len;*s++=*p++;);
}
