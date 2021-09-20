#include <stdio.h>
int main(){
    int n;
    for(n=0;n<20;n++)
    {char k;
    k=getchar();
    if(65<=k<=90||97<=k<=122)
    {k+=4;
    putchar(k);}
    else printf("error");}
    printf("\n");
}