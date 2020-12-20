#include<iostream>
using namespace std;
int SubStrNum(char* str, char* substr) {
	int lenStr = strlen(str);
	int lensubStr = strlen(substr);
	int ans = 0;
	int is_sure = 1;
	for (int i = 0; i < lenStr;) {
		if(substr[0]==str[i]){
			
			for (int j = 0; j <lensubStr; ) {
				
				if (substr[j] != str[i]) { is_sure = 0; }
				i++; j++;
			}
			if (is_sure == 1) {
				ans++;
				
				
			}is_sure = 1;
		}else{
		i++;}
	}
	cout << "match times="<<ans << endl;
	return ans;
}
int main() {
	char a[30] = "hello hellworld hello you", b[7] = "hello";
	SubStrNum(a,b);


}
/*编写一个函数 int SubStrNum(char * str,char * substr) ，
它的功能是：统计子字符串substr在str中出现的次数。
如 str = "hello world hello you"; substr ="hello"，子串substr在str中出现了2次
则输出:
match times=2

如 str ="hhhhhh";substr ="hh";子串substr在str中出现了3次
则输出:
match times=3*/