#include <stdio.h>
 int main (void)
  {int a;
   int c=0,d=0,b=1;
   scanf("%d",&a);
   for(;b<=a;b++)
       {if(b<=6)
	     {
		     if(b%3==0)
            {c+=1; 
		    }
            d=d+c;
	     }
	    else
	     {c=c+1;
	      d=d+c;
		 }
	}
	printf("%d",d+1);
	return (0);
  }