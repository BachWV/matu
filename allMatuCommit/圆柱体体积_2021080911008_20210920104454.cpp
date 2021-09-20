#include<stdio.h>

int main( )


{
	float pi;
    float r;
    float h;
    float area;
    float volume;
	pi=3.14;
	
	scanf("%f %f",&r,&h);
	
	area=pi*r*r;
	
	volume=area*h;
	
	printf("area=%.2f,volume=%.2f",area,volume);
 } 
