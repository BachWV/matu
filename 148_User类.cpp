#include<iostream>
#include <cstring>
#include <string>
/*设计一个User类，要求User类可以保持多个用户的用户名和密码信息，
实现User类的构造函数和AddUser方法添加新用户，
实现int login(char *name,char * pass)方法，该方法接受用户名和密码，
判断用户名对应的密码是否正确，如果正确返回用户的编号，如果不正确返回-1。

User类的使用示意如下所示，在你的代码中除了实现User类以外，还需一如如下main函数

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
例如输入：
test 1234567 test 123456回车
输出：
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