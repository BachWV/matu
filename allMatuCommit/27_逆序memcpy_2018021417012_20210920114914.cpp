#include<stdio.h>
void * reversememcpy ( void * destination, const void * source, int num )
{
    unsigned char *s,*d;
    s=(unsigned char *)source+num-1;
    d=(unsigned char *)destination;
    for(int i=0; i<num; i++)
        *d++=*s--;
return s;
}