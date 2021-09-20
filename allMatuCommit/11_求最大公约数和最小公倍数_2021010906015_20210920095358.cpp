#include<stdio.h>
int main(){
    //????????
    int a,b,i,gcd,lcm;
    scanf("%d %d",&a,&b);
    for(i=1; i<=a&&i<=b; ++i){
        if(a%i==0 && b%i==0)
        gcd=i;
    }
    //????§³??????
    lcm=(a*b)/gcd;
    printf("%d,%d",gcd,lcm);
    return 0;
}
