#include<iostream>
using namespace std;
int SubStrNum(char* str, char* substr)
{
	int i = 0, j = 0, n = 0;
	for(;str[i]!='\0';i++)
		if (str[i] == substr[j])
		{
			do {
				j++; i++;
			} while (str[i] == substr[j] && substr[j] != '\0');
			if (substr[j] == '\0')
				n++;
			j = 0;
		}
	cout << "match times=" << n << endl;
}