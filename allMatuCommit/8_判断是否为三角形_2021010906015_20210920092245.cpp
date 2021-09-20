#include<stdio.h>
int main() {
    int a=0,b=0,c=0;
    int max=0;
    scanf("%d,%d,%d",&a,&b,&c);
    if(a<0||b<0||c<0){
        printf("error");
    }
    if(a+b>c&&a+c>b&&b+c>a){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}
