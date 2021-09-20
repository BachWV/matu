#include<stdio.h>
int main(){
	float r,h,S,V,pi=3.14;
	scanf("%f%f",&r,&h);
	S=pi*r*r;
	V=S*h;
	printf("S=%.2f\n",S);printf(",");printf("V=%.2f\n",V);
	return 0;
} 