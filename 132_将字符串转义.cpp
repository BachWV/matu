#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main(){
	char s1[100];
	cin >> s1 ;
//	cout << s1 << endl;
	char* p = s1;
	char s2[10];
	char* p2 = s2;
	*s2 = *s1;
	while(*p!='\0'){*p2++ = *p++;}
	*p2++ = '\\';
	*p2++ = '0';
	*p2 = '\0';

	cout << s2<< endl;
}