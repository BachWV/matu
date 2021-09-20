#include <iostream>
#include<map>
#include<string>
using namespace std;
typedef class User{
	public:
	map<string,string> d;
	
	User(char *a,char *b){
		AddUser(a,b);
	}
	
	void AddUser(char *a,char *b){
		string n=a,p=b;
		d[a]=p;
	}
	
	int login(char *a,char *b){
		string n=a,p=b;
		if(d.find(a)==d.end()) return -1;
		if(d[a]==p) return 1;
		else return -1;
	}
}User;

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