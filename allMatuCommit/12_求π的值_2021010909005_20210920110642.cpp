#include <stdio.h>

int main(){
    float a,d=1.,s=1.;
    int i;
    scanf("%f",&a);
    for(i=1;d>=a;i++)
    {d=d*i/(2*i+1);
    s+=d;
    }
    s+=d*i/(2*i+1);
    printf("%f",s*2);
    return 0;
}
