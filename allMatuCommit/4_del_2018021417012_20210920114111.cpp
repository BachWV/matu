#include<stdio.h>
void del(char * s,int n,int len)
{char *p;
 s+=n;
 for(p=s+len;*s++=*p++;);
}
int main()
{char s[]="apple";
 if(s==NULL||n<0)
 {printf("error");
  return 0;
 }
 del(s,2,2);
 puts(s);
 return 0;
}