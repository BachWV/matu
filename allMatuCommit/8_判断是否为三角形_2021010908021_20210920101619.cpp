#include<stdio.h>
int main(void)
{
     float a,b,c;
     scanf("%f,%f,%f",&a,&b,&c);
     if(a>0&b>0&c>0)
     {
          if(a+b>c&b+c>a&a+c>b)
          printf("yes");
          else
          printf("no");
      }
      else
      printf("error");
      return 0;
}
      
      