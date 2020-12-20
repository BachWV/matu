#include<iostream>
using namespace std;
int c[200];
void a_minus_b(char *a, char *b) {
	//d[200];
	int i = 0, first = 0;
	int a_lenth = strlen(a);
	int b_lenth = strlen(b);
	int max_ab = max(a_lenth, b_lenth);
	int min_ab = min(a_lenth, b_lenth);
	for (int i = 0; i < min_ab; i++) {
		//d[max_ab-1-i] = 1;
		c[max_ab - 1 - i] = a[max_ab - 1 - i] - b[min_ab - i - 1];
		if (c[max_ab - i - 1] < 0) {// d[max_ab-1-i] = 0; 
			a[max_ab - i - 2] = a[max_ab - i - 2] - 1;
			c[max_ab - 1 - i] += 10;
		}
	}
	for (int i = 0; i < (max_ab - min_ab); i++)
		c[i] = (int)a[i] - 48;
}
int main() {

	char a[200];
	cin >> a;
	
	char b[200];
	cin >> b;
	int uiui = strcmp(a, b);//uiui的名字起得太随意了，是在判断两个字符串大小的时候和a_lenth共同起作用
	int i = 0, first = 0;
	int a_lenth = strlen(a);
	int b_lenth = strlen(b);
	int max_ab = max(a_lenth, b_lenth);
	int min_ab = min(a_lenth, b_lenth);
	if (a_lenth > b_lenth || (a_lenth == b_lenth && uiui > 0)) {
		a_minus_b( a,b);
		cout << "+";
		for (int i=0; i <= max_ab - 1; i++) {
			cout << c[i];
		}
		cout << endl;
	}
	else if(uiui==0){
		cout << "0" << endl;
	}
	else {
		a_minus_b(b, a);
		cout << "-" ;	
		for (int i=0; i <= max_ab - 1; i++) {
			cout << c[i];
		}
		cout << endl;
	}
	
}