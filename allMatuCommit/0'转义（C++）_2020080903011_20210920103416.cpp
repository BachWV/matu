#include<iostream>
using namespace std;
void Mystrcpy(char* s, char* t)
{
	while (*s++ = *t++);
}
int main()
{
	char s1[10],s2[10];
	cin >> s1;
	Mystrcpy(s2, s1);
	cout << s2 << R"(\0)" ;
	return 0;
}