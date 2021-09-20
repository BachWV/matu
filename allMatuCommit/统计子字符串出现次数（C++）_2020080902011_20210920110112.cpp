#include<iostream>
using namespace std;
int SubStrNum(char* str, char* substr)
{
	int i = 0, j = 0, n = 0;
	for (; str[i] != '\0';)
		if (str[i] == substr[j])
		{
			do {
				j++; i++;
			} while (str[i] == substr[j] && substr[j] != '\0');
			if (substr[j] == '\0')
				n++;
			j = 0;
		}
		else i++;
	cout << "match times=" << n << endl;
	return 0;
}
int main()
{
	char str[100]="hhhhhh";
	char substr[100]="hh";
	SubStrNum(str, substr);
	return 0;
}