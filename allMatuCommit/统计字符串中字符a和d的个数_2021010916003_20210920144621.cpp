#include <stdio.h>
#include <string.h>
 int main (void)
    {char j[100];
     int i;
     int m=0,n=0;
     gets(j);
     for(i=0;i<=100;i++)
         {if(j[i]=='a')
            {m++;
			}
		  if(j[i]=='d')
		    {n++;
			}
		 }
	 printf("a:%d,d:%d",m,n);
     return (0);
	 } 