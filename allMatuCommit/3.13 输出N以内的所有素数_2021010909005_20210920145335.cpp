#include <stdio.h>

int main()
{
    int k,n, i, flag = 0;

    scanf("%d",&n);
    if(n<=1)printf("error");
    else{
    for(k=2;k<=n;++k)
    {flag=0;
    for(i=2; i<=k/2; ++i)
    {
        if(k%i==0)
        {flag=1;
         break;
        }
            
    }
    if(flag==0)
    printf("%d,",k);
    }
    }
    return 0;
}


















