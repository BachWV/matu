#include <stdio.h>

int main() {
    int i,k,t,n,s=1;
    t=0;
    scanf("%d",&n);
    if (n<1||n>10)
        printf("error");
    else
        {for(k=1; k<=n; k++)
        {s=1;
            for(i=1; i<=k; i++)
                {s*=i;}
         t+=s;
         }
         
    printf("%d\n",t);}
    return 0;
}