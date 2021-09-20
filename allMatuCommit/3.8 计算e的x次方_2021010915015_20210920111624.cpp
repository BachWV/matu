#include<math.h> 
double f1(int n) 
{ 
    double s=1; 
    int i; 
    for(i=1;i<=n;i++) 
    s*=i; 
    return s; 
} 
int main() 
{ 
    int i; 
    double n,x; 
    scanf("%d %d",&x,&n); 
    for(i=1;i<=n;i++) 
    e^x+=pow(x,i)/f1(i); 
    
    printf("%f\n",e^x); 
}
