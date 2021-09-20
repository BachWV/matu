#include<iostream>
#include<string>
using namespace std;
int main()
{
	char s1[100], s2[100];
	cin.getline(s1,20);
	int i;
	for (i = 0; s1[i] != '\0'; i++)
		s2[i] = s1[i];
	s2[i + 2] = '\0';
	s2[i + 1] = '0';
	s2[i] = '\\';
	cout << s2 << endl;
	return 0;
}