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
/*��дһ������ int SubStrNum(char * str,char * substr) ��
���Ĺ����ǣ�ͳ�����ַ���substr��str�г��ֵĴ�����
�� str = "hello world hello you"; substr ="hello"���Ӵ�substr��str�г�����2��
�����:
match times=2

�� str ="hhhhhh";substr ="hh";�Ӵ�substr��str�г�����3��
�����:
match times=3*/