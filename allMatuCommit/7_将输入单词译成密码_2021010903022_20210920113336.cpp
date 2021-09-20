#include <stdio.h>
int main(){
    int n;
    for(n=0;n<20;n++)
    {char k;
    k=getchar();
    if('A'<=k&&k<='Z'||'a'<=k&&k<='z')
    {k+=4;
    putchar(k);}
    else { printf("error") ;break;}}
    printf("\n");
}