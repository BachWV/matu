#include<iostream>
using namespace std;
void f(char* s, char* t)
{
	while (*s++ = *t++);
}
int main()
{
	char s1[10], s2[10];
	cin >> s1;
	f(s2, s1);
	cout << s2 << R"(\0)";
	return 0;
}
