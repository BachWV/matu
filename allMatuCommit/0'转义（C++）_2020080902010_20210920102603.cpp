#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char s1[100], s2[100];
	int i;
	cin.getline(s1, 100);
	for (i = 0; s1[i]!='\0'; i++)
		s2[i] = s1[i];
	s2[i] = '\\';
	i++;
	s2[i] = '0';
	i++;
	s2[i] = '\0';
	//cout << s2;

	cout << s2 << endl;
	return 0;



}