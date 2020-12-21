/*扩展String类（C++）
通过课程进入	题 号:	156	扩展String类（C++）	语言要求：	C++
扩展String类，引入头文件CString.h,它的内容如下：


实现int IsSubString(int start, const char *str);
从start处开始判断str是否为字符串的子串，是则返回子串第一次出现处的下标位置(下标从0开始计算)，否则返回-1；
例如：
EditString es("testtesttest");
es.IsSubString(3,"test");//4

实现EditChar(char s, char d)，用字符d代替所有字符s，例如：
EditString es("testtesttest");
es.EditChar('t','a');//"aesaaesaaesa"

实现void EditSub(char * subs,char *subd)，用字符串subd代替所有字符串subs，例如：
EditString es("testtesttest");
es.EditChar('test','str');//"strstrstr"

实现void DeleteChar(char ch)，将所有ch字符删除，例如：
EditString es("testtesttest");
es.DeleteChar('t');//"eseses"

实现void DeleteSub(char * sub)，将所有的字符串sub删除，例如：
EditString es("testtesttest");
es.DeleteSub('es');//"tttttt";*/
#include <iostream>
#include <cstring>
using namespace std;
class String{
protected:
    char *mystr;
    int len;
public:
    String(const char *p){
        len = strlen(p);
        mystr = new char[len+1];
        strcpy(mystr,p);
    }
    ~String(){
        if (mystr !=NULL)
        {
            delete []mystr;
            mystr = NULL;
            len = 0;
        }
    }
    void showStr(){cout <<mystr;}
    char * GetStr(){return mystr;}
    virtual bool IsSubString(const char *str){
        int i,j;
        for (i =0;i<len;i++)
        {
            int k = i;
            for (j =0;str[j] !='\0';j++,k++)
            {
                if (str[j]!= mystr[k]) break;
            }
            if(str[j] =='\0') return true;
        }
        return false;
    }
};

class EditString:public String{
public:
    EditString(const char *p):String(p){}
    int IsSubString(int start, const char *str);
    void EditChar(char s, char d);
    void EditSub(char * subs,char *subd);

    void DeleteChar(char ch);
    void DeleteSub(char * sub);

};
int EditString::IsSubString(int start, const char *str) {
    int i,j;
    if(start<len){
        for(i=0;i<len;i++){
            if(i>=start){
                int k = i;
                for (j =0;str[j] !='\0';j++,k++)
                {
                    if (str[j]!= mystr[k]) break;
                }
                if(str[j] =='\0') return i;
            }
        }
        return -1;
    }else return -1;
}
void EditString::EditChar(char s, char d) {
    for(int i=0;i<len;i++){
        if(mystr[i]==s){
            mystr[i]=d;
        }
    }
}
void EditString::EditSub(char *subs,char *subd) {//这个函数有问题，matu没通过，dl写的如下Luosuu/Matu-UESTC-Programming-Starting

    /*void EditString::EditSub(char * subs,char *subd)
{
	int start=EditString::IsSubString(0,subs);
	if(start<0)return;
	else
	{
		int i=0,j=0;
		int l1=strlen(subs);//主串中的子串
	    int l2=strlen(subd);//替换串
	    char newstr[25];
	    for(;i<25;i++)
	    {
	    	newstr[i]='\0';//初始化，据说这是良好的编程习惯...
	    }
	    while(start!=-1)
	    {
	    	for(i=0;j<start;j++,i++)
	    	{
	    		newstr[i]=mystr[j];
	    	}
	    	for(int k=0;k<l2;k++,i++)
	    	{
	    		newstr[i]=subd[k];
	    	}
	    	start=EditString::IsSubString(start+l1,subs);
	    	j=j+l1;
	    	if(start==-1)
		    	for(;j<len;j++,i++)
		    	{
		    		newstr[i]=mystr[j];
		    	}
	    }
	    for(i=0;i<len;i++)
	    {
	    	mystr[i]='\0';
	    }
	    strcpy(mystr,newstr);
//	    int L=strlen(mystr);
//	    for(int i=0;i<L;i++)
//	    cout<<mystr[i]<<endl;
	    return;
	}
} */
    int t=0,i;
    char a[100];

    for(i=0;IsSubString(t,subs)!=-1;){
        if(t==IsSubString(t,subs)){
            for(int j=0;subd[j]!=0;i++,j++){
                a[i]=subd[j];
            }
            t=t+strlen(subs);
        }else{
            a[i]=mystr[t];
            t++;
        }
    }
    a[++i]='\0';
    strcpy(mystr,a);
    len=strlen(a);
}
void EditString::DeleteChar(char ch) {
    char a[100];
    int j=0;
    for(int i=0;mystr[i]!='\0';i++){
        if(mystr[i]!=ch){
            a[j++]=mystr[i];
        }
    }
    a[j++]='\0';
    strcpy(mystr,a);
    len=strlen(a);

}
void EditString::DeleteSub(char *sub) {
    char a[100];
    int t=0;
    int i,j;
    for(i=0;mystr[t]!='\0';){
        if(IsSubString(t,sub)==t){
            t=t+strlen(sub);
            }
        else{
           a[i]=mystr[t];
           i++;
           t++;
        }


    }
    a[i]='\0';
    strcpy(mystr,a);
    len=strlen(a);

}
int main(){
   EditString es("testtesttest");
   cout<< es.IsSubString(0,"test")<<endl;//4
   // String ews("ss");
   // ews


    EditString es5("testtesttest");
    es5.DeleteSub("es");//"tttttt";*/
    es5.showStr();
    return 0;
}