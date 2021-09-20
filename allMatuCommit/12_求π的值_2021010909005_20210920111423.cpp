include <stdio.h>

int main(){
    float a,d=1.,s=1.,s1;
    int i;
    scanf("%f",&a);
    for(i=1;d>=a;i++)
    {d=d*i/(2*i+1);
    s+=d;
    }
    if(a>0.5)
    s1=s;
    else s1=s+d*i/(2*i+1);
    printf("%f",s1*2);
    return 0;
}
