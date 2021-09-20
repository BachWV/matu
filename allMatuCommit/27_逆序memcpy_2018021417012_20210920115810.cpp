#include <stdio.h>
#include <string.h>

void* reversememcpy(void* destination, const void* source, int num)
{
	assert((destination != NULL) && (source != NULL));
	int wordnum = num / 4;//?????§Ø????32¦Ë????4??????
	int slice = num % 4;//???????????
	    int* pintsrc = (int*)source;
	    int* pintdst = (int*)destination;
	     while (wordnum--)*pintdst++ = *pintsrc++;
	     while (slice--)*((char*)pintdst++) = *((char*)pintsrc++);
	     return destination;
	 }
