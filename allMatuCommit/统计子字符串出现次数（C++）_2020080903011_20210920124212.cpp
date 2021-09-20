#include<iostream>
using namespace std;
int SubStrNum(char* str, char* substr)
{
	int i, j;
	int flag , cnt = 0;
	int len1 = sizeof(str)-1;
	int len2 = sizeof(substr)-1;
	for (i = 0; i < len1; ) {
		flag = 1;
		for (j = 0; j < len2; j++) {
			if (*(str + i + j) != *(substr + j)) {
				flag = 0;
				i++;
				break;
			}
		}
		if (flag == 1) {
			cnt++;
			i += len2;
		}
	}
	cout << "match times=" << cnt;
	return cnt;
}