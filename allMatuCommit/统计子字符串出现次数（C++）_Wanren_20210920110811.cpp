//??��??????? int SubStrNum(char* str, char* substr) ??
//????????????????????substr??str?��?????????
//?? str = "hello world hello you"; substr = "hello"?????substr??str?��?????2??
//????? :
//match times = 2
//
//?? str = "hhhhhh"; substr = "hh"; ???substr??str?��?????3??
//????? :
//match times = 3
//
#include<iostream>
#include<string.h>
using namespace std;
int SubStrNum(char* str, char* substr) {
	int sum = 0;
	for (int i = 0; i <= (int)strlen(str)-(int)strlen(substr); i++)
	{
		if (str[i] == substr[0]) {
			char* p = &str[i],flag=0;
			//??????????flag?1??????????????
			for (int j = 0; j < (int)strlen(substr); j++)
			{
				if (*p++ == substr[j]) continue;
				else {
					flag = 1;
					break;
				}
			}
			if (flag == 0) {
				sum++;
				i += strlen(substr)
			}
		}
		else continue;
	}
	cout << "match times=" << sum;
	return sum;
}
