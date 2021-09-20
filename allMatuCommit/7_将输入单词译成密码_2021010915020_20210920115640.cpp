#include<stdio.h>

int main(void)
{
char a [20];
int i=0;
for(i=0;i<20;i++)
{
 scanf("%c",&a[i]);
}
if(a[0]=" ")
 printf("error");
else
{
for(i=0;i<20;i++)
{if(a[i]>='A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z')
 {if(a[i]>='w'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
   a[i]-=22;
   else
   a[i]+=4;}
 else 
printf("error");}
}
for(i=0;i<20;i++)
printf("%c",&a[i]);
return 0;
}