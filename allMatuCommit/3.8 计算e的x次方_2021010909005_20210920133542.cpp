#include <stdio.h>

int main(){
    double p,x,n,s,t,k,i;
    p=1.;
    scanf("%If%If",&x,&n);
    if (n<=0) printf("error");
    else{for (i=1.;i<=n;i++)
    {s=1.;
    t=1.;  
    for(k=1.;k<=i;k++)
    {
    s=s*x;
    t=t*i;
    }
    p=p+s/t;
    }
    printf("%.6If",p);
    }
    return 0;
}


