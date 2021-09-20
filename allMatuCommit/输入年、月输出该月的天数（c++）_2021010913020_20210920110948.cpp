#include<stdio.h>
int main()
{int a,b;
scanf("%d %d",&a,&b);
if(b<0)
printf("error\n");
else
{
b=b%12;
switch(b)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:printf("days:31\n");break;
case 4:
case 6:
case 9:
case 11:printf("days:30\n");break;
case 2:if(a%400==0||(a%4==0&&a%100!=0))
      printf("days:29\n");
     else
     printf("days:28\n");
     break;
}
}
return 0;
}
