#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    scanf("%d", &a);
    d=sqrt(a);
    for(b=2,c=0;b<d;b++){
      if(d%b==0)
        c++;
    }
    if(c>0)  printf("yes");
    else     printf("no");
    return 0;
}