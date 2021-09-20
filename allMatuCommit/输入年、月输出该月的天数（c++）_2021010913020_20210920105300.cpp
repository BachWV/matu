#include<stdio.h>
Int main()
{int nian,yue;
scanf("%d%d"&nian,&yue);
if(yue<0)
printf("error\n");
else
{
yue=yue%12;
switch(yue)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10??
case 12:printf("days:31\n");break;
case 4:
case 6:
case 9:
case 11:printf("days:30\n");break;
case 2:if(nian%400=0||(nian%4=0&&nian%100!=0))
      printf("days:29\n");
     else
     printf("days:28\n");
     break;
}
return 0;
}
