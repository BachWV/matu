#include<stdio.h>

int main( )

{
    int i,j;

    for(i=1;i<=1000;i++)

    {
        int sum=0;

        for(j=1;j<i;j++)

        {
            if (i%j==0) sum+=j;

        }

       if (sum==i) printf("%d\n",i);

    }

    return 0;

}
