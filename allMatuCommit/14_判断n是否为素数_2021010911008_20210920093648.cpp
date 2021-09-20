#include<stdio.h>

int main()
{
    long int a,b,c;
    scanf("%d", &a);
    for(b=2,c=0;b<a;b++){
      if(a%b==0)
        c++;
    }
    if(c>0)  printf("yes");
    else     printf("no");
    return 0;
}