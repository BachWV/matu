#include<iostream>
#include <cstring>
#include <string>
/*���һ��User�࣬Ҫ��User����Ա��ֶ���û����û�����������Ϣ��
ʵ��User��Ĺ��캯����AddUser����������û���
ʵ��int login(char *name,char * pass)�������÷��������û��������룬
�ж��û�����Ӧ�������Ƿ���ȷ�������ȷ�����û��ı�ţ��������ȷ����-1��

User���ʹ��ʾ��������ʾ������Ĵ����г���ʵ��User�����⣬����һ������main����

int main(){
	char name[10],name1[10],pass[10],pass1[10];
	cin>>name>>pass>>name1>>pass1;
	User user("LiWei","liwei101");
	user.AddUser(name,pass);
	if (user.login(name1,pass1) >=0)
	{
		cout<<"Success Login!"<<endl;
	}
	else{
		cout<<"Login failed!"<<endl;
	}
	  return 0;
}
�������룺
test 1234567 test 123456�س�
�����
Login failed!*/
using namespace std;
typedef struct ppp {
	
	char* name;
char *pass;
}PPP;
class User {
public:
	void AddUser(char* name, char* pass) {
		len = 1;
		ss[len].name = new char[10];
		ss[len].pass = new char[10];
		strcpy_s(ss[len].name, 10, name);
		strcpy_s(ss[len].pass, 10, pass);
		len++;
	}
	int login(char* name, char* pass) {
		
		for (int t = 0; t < len; t++) {
		if (strcmp(name, ss[t].name)==0 && strcmp(pass, ss[t].pass)==0)
				return t;}
		
		return -1;

	}
	User(const char a[], const char b[]){
		len = 0;
		ss[0].name = new char[10];
		ss[0].pass = new char[10];
		strcpy_s(ss[0].name,10,a);
		strcpy_s(ss[0].pass, 10,b);
		
	}
private:
	PPP ss[100];
	int len;

};

int main() {
	char name[10], name1[10], pass[10], pass1[10];
	cin >> name >> pass >> name1 >> pass1;
	User user("Liwei", "liwei101");
	user.AddUser(name, pass);
	if (user.login(name1, pass1) >= 0)
	{
		cout << "Success Login!" << endl;
	}
	else {
		cout << "Login failed!" << endl;
	}

	return 0;
}